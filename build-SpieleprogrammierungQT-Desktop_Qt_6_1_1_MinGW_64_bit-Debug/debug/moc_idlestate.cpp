/****************************************************************************
** Meta object code from reading C++ file 'idlestate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/idlestate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'idlestate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IdleState_t {
    const uint offsetsAndSize[14];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_IdleState_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_IdleState_t qt_meta_stringdata_IdleState = {
    {
QT_MOC_LITERAL(0, 9), // "IdleState"
QT_MOC_LITERAL(10, 11), // "moveRequest"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 9), // "direction"
QT_MOC_LITERAL(33, 18), // "descriptionRequest"
QT_MOC_LITERAL(52, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(71, 6) // "output"

    },
    "IdleState\0moveRequest\0\0direction\0"
    "descriptionRequest\0issueConsoleOutput\0"
    "output"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IdleState[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    0 /* Public */,
       4,    0,   35,    2, 0x06,    2 /* Public */,
       5,    1,   36,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void IdleState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IdleState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moveRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->descriptionRequest(); break;
        case 2: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IdleState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IdleState::moveRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IdleState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IdleState::descriptionRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IdleState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IdleState::issueConsoleOutput)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject IdleState::staticMetaObject = { {
    QMetaObject::SuperData::link<IStates::staticMetaObject>(),
    qt_meta_stringdata_IdleState.offsetsAndSize,
    qt_meta_data_IdleState,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_IdleState_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *IdleState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IdleState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IdleState.stringdata0))
        return static_cast<void*>(this);
    return IStates::qt_metacast(_clname);
}

int IdleState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IStates::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void IdleState::moveRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IdleState::descriptionRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void IdleState::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
