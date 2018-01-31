/****************************************************************************
** Meta object code from reading C++ file 'pubsubclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pubsubclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pubsubclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PubSubClient_t {
    QByteArrayData data[22];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PubSubClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PubSubClient_t qt_meta_stringdata_PubSubClient = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PubSubClient"
QT_MOC_LITERAL(1, 13, 13), // "humiInChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "humiOutChanged"
QT_MOC_LITERAL(4, 43, 13), // "tempInChanged"
QT_MOC_LITERAL(5, 57, 14), // "tempOutChanged"
QT_MOC_LITERAL(6, 72, 14), // "pressInChanged"
QT_MOC_LITERAL(7, 87, 15), // "pressOutChanged"
QT_MOC_LITERAL(8, 103, 14), // "lumiOutChanged"
QT_MOC_LITERAL(9, 118, 11), // "onConnected"
QT_MOC_LITERAL(10, 130, 12), // "onSubscribed"
QT_MOC_LITERAL(11, 143, 13), // "offSubscribed"
QT_MOC_LITERAL(12, 157, 10), // "onReceived"
QT_MOC_LITERAL(13, 168, 14), // "QMQTT::Message"
QT_MOC_LITERAL(14, 183, 14), // "publishShutter"
QT_MOC_LITERAL(15, 198, 6), // "humiIn"
QT_MOC_LITERAL(16, 205, 7), // "humiOut"
QT_MOC_LITERAL(17, 213, 6), // "tempIn"
QT_MOC_LITERAL(18, 220, 7), // "tempOut"
QT_MOC_LITERAL(19, 228, 7), // "pressIn"
QT_MOC_LITERAL(20, 236, 8), // "pressOut"
QT_MOC_LITERAL(21, 245, 7) // "lumiOut"

    },
    "PubSubClient\0humiInChanged\0\0humiOutChanged\0"
    "tempInChanged\0tempOutChanged\0"
    "pressInChanged\0pressOutChanged\0"
    "lumiOutChanged\0onConnected\0onSubscribed\0"
    "offSubscribed\0onReceived\0QMQTT::Message\0"
    "publishShutter\0humiIn\0humiOut\0tempIn\0"
    "tempOut\0pressIn\0pressOut\0lumiOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PubSubClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       7,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   81,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      11,    0,   85,    2, 0x0a /* Public */,
      12,    1,   86,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    2,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // properties: name, type, flags
      15, QMetaType::Float, 0x00495003,
      16, QMetaType::Float, 0x00495003,
      17, QMetaType::Float, 0x00495003,
      18, QMetaType::Float, 0x00495003,
      19, QMetaType::Float, 0x00495003,
      20, QMetaType::Float, 0x00495003,
      21, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void PubSubClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PubSubClient *_t = static_cast<PubSubClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->humiInChanged(); break;
        case 1: _t->humiOutChanged(); break;
        case 2: _t->tempInChanged(); break;
        case 3: _t->tempOutChanged(); break;
        case 4: _t->pressInChanged(); break;
        case 5: _t->pressOutChanged(); break;
        case 6: _t->lumiOutChanged(); break;
        case 7: _t->onConnected(); break;
        case 8: _t->onSubscribed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->offSubscribed(); break;
        case 10: _t->onReceived((*reinterpret_cast< const QMQTT::Message(*)>(_a[1]))); break;
        case 11: _t->publishShutter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMQTT::Message >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PubSubClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PubSubClient::humiInChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PubSubClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PubSubClient::humiOutChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PubSubClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PubSubClient::tempInChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PubSubClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PubSubClient::tempOutChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PubSubClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PubSubClient::pressInChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PubSubClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PubSubClient::pressOutChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PubSubClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PubSubClient::lumiOutChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PubSubClient *_t = static_cast<PubSubClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->m_humiIn; break;
        case 1: *reinterpret_cast< float*>(_v) = _t->m_humiOut; break;
        case 2: *reinterpret_cast< float*>(_v) = _t->m_tempIn; break;
        case 3: *reinterpret_cast< float*>(_v) = _t->m_tempOut; break;
        case 4: *reinterpret_cast< float*>(_v) = _t->m_pressIn; break;
        case 5: *reinterpret_cast< float*>(_v) = _t->m_pressOut; break;
        case 6: *reinterpret_cast< float*>(_v) = _t->m_lumiOut; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PubSubClient *_t = static_cast<PubSubClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_humiIn != *reinterpret_cast< float*>(_v)) {
                _t->m_humiIn = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->humiInChanged();
            }
            break;
        case 1:
            if (_t->m_humiOut != *reinterpret_cast< float*>(_v)) {
                _t->m_humiOut = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->humiOutChanged();
            }
            break;
        case 2:
            if (_t->m_tempIn != *reinterpret_cast< float*>(_v)) {
                _t->m_tempIn = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->tempInChanged();
            }
            break;
        case 3:
            if (_t->m_tempOut != *reinterpret_cast< float*>(_v)) {
                _t->m_tempOut = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->tempOutChanged();
            }
            break;
        case 4:
            if (_t->m_pressIn != *reinterpret_cast< float*>(_v)) {
                _t->m_pressIn = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->pressInChanged();
            }
            break;
        case 5:
            if (_t->m_pressOut != *reinterpret_cast< float*>(_v)) {
                _t->m_pressOut = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->pressOutChanged();
            }
            break;
        case 6:
            if (_t->m_lumiOut != *reinterpret_cast< float*>(_v)) {
                _t->m_lumiOut = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->lumiOutChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PubSubClient::staticMetaObject = {
    { &QMQTT::Client::staticMetaObject, qt_meta_stringdata_PubSubClient.data,
      qt_meta_data_PubSubClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PubSubClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PubSubClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PubSubClient.stringdata0))
        return static_cast<void*>(this);
    return QMQTT::Client::qt_metacast(_clname);
}

int PubSubClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMQTT::Client::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PubSubClient::humiInChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PubSubClient::humiOutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PubSubClient::tempInChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PubSubClient::tempOutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PubSubClient::pressInChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PubSubClient::pressOutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PubSubClient::lumiOutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
