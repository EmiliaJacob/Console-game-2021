/****************************************************************************
** Meta object code from reading C++ file 'dropstate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/dropstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dropstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DropState_t {
    const uint offsetsAndSize[24];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DropState_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DropState_t qt_meta_stringdata_DropState = {
    {
QT_MOC_LITERAL(0, 9), // "DropState"
QT_MOC_LITERAL(10, 18), // "changeStateRequest"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 8), // "newState"
QT_MOC_LITERAL(39, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(58, 6), // "output"
QT_MOC_LITERAL(65, 20), // "listInventoryRequest"
QT_MOC_LITERAL(86, 14), // "dropOneRequest"
QT_MOC_LITERAL(101, 8), // "itemname"
QT_MOC_LITERAL(110, 15), // "dropManyRequest"
QT_MOC_LITERAL(126, 6), // "amount"
QT_MOC_LITERAL(133, 14) // "dropAllRequest"

    },
    "DropState\0changeStateRequest\0\0newState\0"
    "issueConsoleOutput\0output\0"
    "listInventoryRequest\0dropOneRequest\0"
    "itemname\0dropManyRequest\0amount\0"
    "dropAllRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DropState[] = {

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

void DropState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DropState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeStateRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->listInventoryRequest(); break;
        case 3: _t->dropOneRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->dropManyRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->dropAllRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DropState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropState::changeStateRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DropState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropState::issueConsoleOutput)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DropState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropState::listInventoryRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DropState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropState::dropOneRequest)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DropState::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropState::dropManyRequest)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DropState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropState::dropAllRequest)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject DropState::staticMetaObject = { {
    QMetaObject::SuperData::link<IStates::staticMetaObject>(),
    qt_meta_stringdata_DropState.offsetsAndSize,
    qt_meta_data_DropState,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DropState_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *DropState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DropState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DropState.stringdata0))
        return static_cast<void*>(this);
    return IStates::qt_metacast(_clname);
}

int DropState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DropState::changeStateRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DropState::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DropState::listInventoryRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DropState::dropOneRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DropState::dropManyRequest(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DropState::dropAllRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
