/****************************************************************************
** Meta object code from reading C++ file 'pickupstate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/pickupstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pickupstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PickUpState_t {
    const uint offsetsAndSize[24];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PickUpState_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PickUpState_t qt_meta_stringdata_PickUpState = {
    {
QT_MOC_LITERAL(0, 11), // "PickUpState"
QT_MOC_LITERAL(12, 18), // "changeStateRequest"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 8), // "newState"
QT_MOC_LITERAL(41, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(60, 6), // "output"
QT_MOC_LITERAL(67, 25), // "listAvailableItemsRequest"
QT_MOC_LITERAL(93, 16), // "pickUpOneRequest"
QT_MOC_LITERAL(110, 8), // "itemname"
QT_MOC_LITERAL(119, 17), // "pickUpManyRequest"
QT_MOC_LITERAL(137, 6), // "amount"
QT_MOC_LITERAL(144, 16) // "pickUpAllRequest"

    },
    "PickUpState\0changeStateRequest\0\0"
    "newState\0issueConsoleOutput\0output\0"
    "listAvailableItemsRequest\0pickUpOneRequest\0"
    "itemname\0pickUpManyRequest\0amount\0"
    "pickUpAllRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PickUpState[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    0 /* Public */,
       4,    1,   53,    2, 0x06,    2 /* Public */,
       6,    0,   56,    2, 0x06,    4 /* Public */,
       7,    1,   57,    2, 0x06,    5 /* Public */,
       9,    2,   60,    2, 0x06,    7 /* Public */,
      11,    1,   65,    2, 0x06,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,   10,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void PickUpState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PickUpState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeStateRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->listAvailableItemsRequest(); break;
        case 3: _t->pickUpOneRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->pickUpManyRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->pickUpAllRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PickUpState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PickUpState::changeStateRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PickUpState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PickUpState::issueConsoleOutput)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PickUpState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PickUpState::listAvailableItemsRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PickUpState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PickUpState::pickUpOneRequest)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PickUpState::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PickUpState::pickUpManyRequest)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PickUpState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PickUpState::pickUpAllRequest)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject PickUpState::staticMetaObject = { {
    QMetaObject::SuperData::link<IStates::staticMetaObject>(),
    qt_meta_stringdata_PickUpState.offsetsAndSize,
    qt_meta_data_PickUpState,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PickUpState_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *PickUpState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PickUpState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PickUpState.stringdata0))
        return static_cast<void*>(this);
    return IStates::qt_metacast(_clname);
}

int PickUpState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IStates::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PickUpState::changeStateRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PickUpState::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PickUpState::listAvailableItemsRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PickUpState::pickUpOneRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PickUpState::pickUpManyRequest(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PickUpState::pickUpAllRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
