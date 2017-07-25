/****************************************************************************
** Meta object code from reading C++ file 'blemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../VPP/blemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BLEmanager_t {
    QByteArrayData data[23];
    char stringdata0[263];
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
QT_MOC_LITERAL(7, 55, 11), // "opened_door"
QT_MOC_LITERAL(8, 67, 22), // "get_user_infor_from_db"
QT_MOC_LITERAL(9, 90, 5), // "_pass"
QT_MOC_LITERAL(10, 96, 21), // "update_connect_status"
QT_MOC_LITERAL(11, 118, 12), // "dataReceived"
QT_MOC_LITERAL(12, 131, 4), // "data"
QT_MOC_LITERAL(13, 136, 9), // "write_ble"
QT_MOC_LITERAL(14, 146, 11), // "start_timer"
QT_MOC_LITERAL(15, 158, 11), // "scan_device"
QT_MOC_LITERAL(16, 170, 16), // "disconnectDevice"
QT_MOC_LITERAL(17, 187, 17), // "connect_to_device"
QT_MOC_LITERAL(18, 205, 8), // "_address"
QT_MOC_LITERAL(19, 214, 7), // "scanBLE"
QT_MOC_LITERAL(20, 222, 12), // "power_enable"
QT_MOC_LITERAL(21, 235, 13), // "save_database"
QT_MOC_LITERAL(22, 249, 13) // "load_database"

    },
    "BLEmanager\0ble_name\0\0_name\0_add\0"
    "device_connect\0_status\0opened_door\0"
    "get_user_infor_from_db\0_pass\0"
    "update_connect_status\0dataReceived\0"
    "data\0write_ble\0start_timer\0scan_device\0"
    "disconnectDevice\0connect_to_device\0"
    "_address\0scanBLE\0power_enable\0"
    "save_database\0load_database"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BLEmanager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       5,    1,   94,    2, 0x06 /* Public */,
       7,    0,   97,    2, 0x06 /* Public */,
       8,    2,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  103,    2, 0x08 /* Private */,
      11,    1,  106,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    0,  111,    2, 0x02 /* Public */,
      16,    0,  112,    2, 0x02 /* Public */,
      17,    1,  113,    2, 0x02 /* Public */,
      19,    1,  116,    2, 0x02 /* Public */,
      20,    0,  119,    2, 0x02 /* Public */,
      21,    2,  120,    2, 0x02 /* Public */,
      22,    0,  125,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    9,
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
        case 2: _t->opened_door(); break;
        case 3: _t->get_user_infor_from_db((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->update_connect_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->dataReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->write_ble(); break;
        case 7: _t->start_timer(); break;
        case 8: _t->scan_device(); break;
        case 9: _t->disconnectDevice(); break;
        case 10: _t->connect_to_device((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->scanBLE((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->power_enable(); break;
        case 13: _t->save_database((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->load_database(); break;
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
        {
            typedef void (BLEmanager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BLEmanager::opened_door)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BLEmanager::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BLEmanager::get_user_infor_from_db)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject BLEmanager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BLEmanager.data,
      qt_meta_data_BLEmanager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BLEmanager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BLEmanager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void BLEmanager::ble_name(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BLEmanager::device_connect(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BLEmanager::opened_door()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BLEmanager::get_user_infor_from_db(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
