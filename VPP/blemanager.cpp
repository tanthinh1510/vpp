#include "blemanager.h"

BLEmanager::BLEmanager(QObject *parent) : QObject(parent), localDevice(new QBluetoothLocalDevice)
{
    power_enable();
    m_bleInterface = new BLEInterface(this);
    m_timer = new QTimer();
    m_database_manager.database_init();
    m_database_manager.open_database();

    connect(m_bleInterface, &BLEInterface::dataReceived,
            this, &BLEmanager::dataReceived);

    connect(m_bleInterface, &BLEInterface::servicesChanged,
            [this] (QStringList services){
        emit device_connect(true);

    });
    connect(m_bleInterface, &BLEInterface::devivedisconnect,
            [this]{
        emit device_connect(false);
    });
    connect(m_bleInterface,SIGNAL(connectedChanged(bool)),this,SLOT(update_connect_status(bool)));
    connect(m_bleInterface,SIGNAL(ble_connect()),this,SLOT(start_timer()));
    //    connect(m_timer,SIGNAL(timeout()),this,SLOT(write_ble()));

}
void BLEmanager::update_connect_status(bool _status)
{
    emit device_connect(_status);
}


void BLEmanager::scan_device()
{
    qDebug() << "scan";
    m_bleInterface->scanDevices();
}

void BLEmanager::disconnectDevice()
{
    m_bleInterface->disconnectDevice();
}

void BLEmanager::connect_to_device(QString _address)
{
    m_bleInterface->connectCurrentDevice(_address);
}





void BLEmanager::scanBLE(bool _status)
{
    if(_status){
        //        QAndroidJniObject::callStaticMethod<void>("org/qtproject/lamp/MainActivity",
        //                                              "scanNewAdvertise");
        QtAndroid::androidActivity().callMethod<void>("scanLeDevice");
    }
    //    else QAndroidJniObject::callStaticMethod<void>("org/qtproject/lamp/MainActivity",
    //                                                   "stopScanNewAdvertise");
}



void BLEmanager::power_enable()
{
    localDevice->powerOn();
}

void BLEmanager::save_database(QString _name, QString _pass)
{
    qDebug() << "name " << _name << "pass " << _pass;
    if(current_user_name != _name || current_password != _pass){
        current_user_name = _name;
        current_password = _pass;
        m_profile_selected_name = "userdb";
        if(m_database_manager.params_table_init(m_profile_selected_name)){
            m_database_manager.save_one_parameter(0,current_user_name,current_password);
            qDebug() << "name save" << _name << "pass save" << _pass;
        }
    }
}

void BLEmanager::load_database()
{
    qDebug() << "load database";
    m_profile_selected_name = "userdb";
    if(m_database_manager.params_table_init(m_profile_selected_name)){
        current_user_name = m_database_manager.get_name_parameter(0);
        current_password = m_database_manager.get_pass_parameter(0);
        emit get_user_infor_from_db(current_user_name,current_password);
        qDebug() << "name load" << m_database_manager.get_name_parameter(0)<< "pass load" << m_database_manager.get_pass_parameter(0);
    }
}

void BLEmanager::dataReceived(QByteArray data)
{
    qDebug() << "Data receiver: " << data;
    m_bleInterface->disconnectDevice();
    //    connect_to_device("00:00:00:00:00:00");
    emit opened_door();

}

void BLEmanager::write_ble()
{
    QString open = "1";
    QByteArray data = QByteArray(open.toLatin1());
    m_bleInterface->write(data);
    //    unsigned char datapass[] = {1};
    //    int size = sizeof(datapass);
    //    m_bleInterface->write(QByteArray((char*)datapass,size));
    //    m_timer->stop;
}

void BLEmanager::start_timer()
{
    QTimer::singleShot(300, this, SLOT(write_ble()));
}
