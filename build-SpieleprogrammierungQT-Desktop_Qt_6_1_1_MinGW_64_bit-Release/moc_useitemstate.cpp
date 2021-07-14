/****************************************************************************
** Meta object code from reading C++ file 'useitemstate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/useitemstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'useitemstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UseItemState_t {
    const uint offsetsAndSize[18];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_UseItemState_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_UseItemState_t qt_meta_stringdata_UseItemState = {
    {
QT_MOC_LITERAL(0, 12), // "UseItemState"
QT_MOC_LITERAL(13, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 6), // "output"
QT_MOC_LITERAL(40, 20), // "listInventoryRequest"
QT_MOC_LITERAL(61, 14), // "useItemRequest"
QT_MOC_LITERAL(76, 8), // "itemName"
QT_MOC_LITERAL(85, 18), // "changeStateRequest"
QT_MOC_LITERAL(104, 8) // "newState"

    },
    "UseItemState\0issueConsoleOutput\0\0"
    "output\0listInventoryRequest\0useItemRequest\0"
    "itemName\0changeStateRequest\0newState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UseItemState[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    0 /* Public */,
       4,    0,   41,    2, 0x06,    2 /* Public */,
       5,    1,   42,    2, 0x06,    3 /* Public */,
       7,    1,   45,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void UseItemState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UseItemState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->listInventoryRequest(); break;
        case 2: _t->useItemRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->changeStateRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UseItemState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UseItemState::issueConsoleOutput)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UseItemState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UseItemState::listInventoryRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UseItemState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UseItemState::useItemRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UseItemState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UseItemState::changeStateRequest)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject UseItemState::staticMetaObject = { {
    QMetaObject::SuperData::link<IStates::staticMetaObject>(),
    qt_meta_stringdata_UseItemState.offsetsAndSize,
    qt_meta_data_UseItemState,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_UseItemState_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *UseItemState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UseItemState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UseItemState.stringdata0))
        return static_cast<void*>(this);
    return IStates::qt_metacast(_clname);
}

int UseItemState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IStates::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UseItemState::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UseItemState::listInventoryRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UseItemState::useItemRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UseItemState::changeStateRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
