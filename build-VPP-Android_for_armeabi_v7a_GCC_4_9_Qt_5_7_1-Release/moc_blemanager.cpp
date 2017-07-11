/****************************************************************************
** Meta object code from reading C++ file 'blemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../VPP/blemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BLEmanager_t {
    QByteArrayData data[16];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BLEmanager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BLEmanager_t qt_meta_stringdata_BLEmanager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BLEmanager"
QT_MOC_LITERAL(1, 11, 8), // "ble_name"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "_name"
QT_MOC_LITERAL(4, 27, 4), // "_add"
QT_MOC_LITERAL(5, 32, 14), // "device_connect"
QT_MOC_LITERAL(6, 47, 7), // "_status"
QT_MOC_LITERAL(7, 55, 21), // "update_connect_status"
QT_MOC_LITERAL(8, 77, 12), // "dataReceived"
QT_MOC_LITERAL(9, 90, 4), // "data"
QT_MOC_LITERAL(10, 95, 11), // "scan_device"
QT_MOC_LITERAL(11, 107, 16), // "disconnectDevice"
QT_MOC_LITERAL(12, 124, 17), // "connect_to_device"
QT_MOC_LITERAL(13, 142, 8), // "_address"
QT_MOC_LITERAL(14, 151, 7), // "scanBLE"
QT_MOC_LITERAL(15, 159, 12) // "power_enable"

    },
    "BLEmanager\0ble_name\0\0_name\0_add\0"
    "device_connect\0_status\0update_connect_status\0"
    "dataReceived\0data\0scan_device\0"
    "disconnectDevice\0connect_to_device\0"
    "_address\0scanBLE\0power_enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BLEmanager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   67,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   73,    2, 0x02 /* Public */,
      11,    0,   74,    2, 0x02 /* Public */,
      12,    1,   75,    2, 0x02 /* Public */,
      14,    1,   78,    2, 0x02 /* Public */,
      15,    0,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QByteArray,    9,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void BLEmanager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BLEmanager *_t = static_cast<BLEmanager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ble_name((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->device_connect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->update_connect_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->dataReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->scan_device(); break;
        case 5: _t->disconnectDevice(); break;
        case 6: _t->connect_to_device((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->scanBLE((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->power_enable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BLEmanager::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BLEmanager::ble_name)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BLEmanager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BLEmanager::device_connect)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BLEmanager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BLEmanager.data,
      qt_meta_data_BLEmanager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BLEmanager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BLEmanager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BLEmanager.stringdata0))
        return static_cast<void*>(const_cast< BLEmanager*>(this));
    return QObject::qt_metacast(_clname);
}

int BLEmanager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void BLEmanager::ble_name(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BLEmanager::device_connect(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
