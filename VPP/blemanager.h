#ifndef BLEMANAGER_H
#define BLEMANAGER_H

#include <QObject>
#include "bleinterface.h"
#include <QDebug>
#include <QTimer>
#include <QString>
#include <QAndroidJniObject>
#include <QtAndroidExtras>
#include <QtAndroid>
#include <QStringList>
#include <QBluetoothLocalDevice>

#include "QTime"
#include "QTimer"
#include <QDateTime>
#include <QList>

class BLEmanager : public QObject
{
    Q_OBJECT
public:
    explicit BLEmanager(QObject *parent = 0);
    Q_INVOKABLE void scan_device();
    Q_INVOKABLE void disconnectDevice();
    Q_INVOKABLE void connect_to_device(QString _address);
    Q_INVOKABLE void scanBLE(bool _status);
    Q_INVOKABLE void power_enable();


signals:
    void ble_name(QString _name, QString _add);
    void device_connect(bool _status);
    void opened_door();
public slots:

private slots:
    void update_connect_status(bool _status);
    void dataReceived(QByteArray data);
    void write_ble();
    void start_timer();


private:
    BLEInterface *m_bleInterface;    
    QBluetoothLocalDevice *localDevice;
    QTimer *m_timer;
};

#endif // BLEMANAGER_H
