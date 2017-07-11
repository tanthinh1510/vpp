#include "blemanager.h"

BLEmanager::BLEmanager(QObject *parent) : QObject(parent), localDevice(new QBluetoothLocalDevice)
{
    power_enable();
    m_bleInterface = new BLEInterface(this);
    m_timer = new QTimer();

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
