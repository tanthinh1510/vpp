/****************************************************************************
** Meta object code from reading C++ file 'httpclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../VPP/httpclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HttpClient_t {
    QByteArrayData data[25];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpClient_t qt_meta_stringdata_HttpClient = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HttpClient"
QT_MOC_LITERAL(1, 11, 23), // "create_group_from_cloud"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "_group"
QT_MOC_LITERAL(4, 43, 23), // "creat_device_from_cloud"
QT_MOC_LITERAL(5, 67, 5), // "_name"
QT_MOC_LITERAL(6, 73, 8), // "_address"
QT_MOC_LITERAL(7, 82, 3), // "_id"
QT_MOC_LITERAL(8, 86, 5), // "_type"
QT_MOC_LITERAL(9, 92, 27), // "update_device_id_from_cloud"
QT_MOC_LITERAL(10, 120, 12), // "login_status"
QT_MOC_LITERAL(11, 133, 7), // "_status"
QT_MOC_LITERAL(12, 141, 13), // "access_status"
QT_MOC_LITERAL(13, 155, 12), // "get_msg_open"
QT_MOC_LITERAL(14, 168, 4), // "_msg"
QT_MOC_LITERAL(15, 173, 17), // "read_data_request"
QT_MOC_LITERAL(16, 191, 14), // "QNetworkReply*"
QT_MOC_LITERAL(17, 206, 5), // "reply"
QT_MOC_LITERAL(18, 212, 12), // "process_json"
QT_MOC_LITERAL(19, 225, 5), // "_data"
QT_MOC_LITERAL(20, 231, 15), // "login_to_server"
QT_MOC_LITERAL(21, 247, 5), // "_pass"
QT_MOC_LITERAL(22, 253, 17), // "send_request_open"
QT_MOC_LITERAL(23, 271, 4), // "_mac"
QT_MOC_LITERAL(24, 276, 20) // "get_all_device_cloud"

    },
    "HttpClient\0create_group_from_cloud\0\0"
    "_group\0creat_device_from_cloud\0_name\0"
    "_address\0_id\0_type\0update_device_id_from_cloud\0"
    "login_status\0_status\0access_status\0"
    "get_msg_open\0_msg\0read_data_request\0"
    "QNetworkReply*\0reply\0process_json\0"
    "_data\0login_to_server\0_pass\0"
    "send_request_open\0_mac\0get_all_device_cloud"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    5,   72,    2, 0x06 /* Public */,
       9,    3,   83,    2, 0x06 /* Public */,
      10,    1,   90,    2, 0x06 /* Public */,
      12,    1,   93,    2, 0x06 /* Public */,
      13,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   99,    2, 0x08 /* Private */,
      18,    1,  102,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      20,    2,  105,    2, 0x02 /* Public */,
      22,    2,  110,    2, 0x02 /* Public */,
      24,    0,  115,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    5,    3,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    5,    7,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   23,
    QMetaType::Void,

       0        // eod
};

void HttpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpClient *_t = static_cast<HttpClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->create_group_from_cloud((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->creat_device_from_cloud((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 2: _t->update_device_id_from_cloud((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->login_status((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->access_status((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->get_msg_open((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->read_data_request((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->process_json((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->login_to_server((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->send_request_open((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->get_all_device_cloud(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpClient::create_group_from_cloud)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HttpClient::*_t)(QString , QString , QString , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpClient::creat_device_from_cloud)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HttpClient::*_t)(QString , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpClient::update_device_id_from_cloud)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HttpClient::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpClient::login_status)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (HttpClient::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpClient::access_status)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (HttpClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpClient::get_msg_open)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject HttpClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpClient.data,
      qt_meta_data_HttpClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HttpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HttpClient.stringdata0))
        return static_cast<void*>(const_cast< HttpClient*>(this));
    return QObject::qt_metacast(_clname);
}

int HttpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void HttpClient::create_group_from_cloud(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HttpClient::creat_device_from_cloud(QString _t1, QString _t2, QString _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HttpClient::update_device_id_from_cloud(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HttpClient::login_status(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HttpClient::access_status(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HttpClient::get_msg_open(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
