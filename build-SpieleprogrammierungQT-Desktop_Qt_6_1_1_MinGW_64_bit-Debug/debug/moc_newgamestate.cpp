/****************************************************************************
** Meta object code from reading C++ file 'newgamestate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/newgamestate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newgamestate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewGameState_t {
    const uint offsetsAndSize[16];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_NewGameState_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_NewGameState_t qt_meta_stringdata_NewGameState = {
    {
QT_MOC_LITERAL(0, 12), // "NewGameState"
QT_MOC_LITERAL(13, 18), // "changeStateRequest"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 8), // "newState"
QT_MOC_LITERAL(42, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(61, 6), // "output"
QT_MOC_LITERAL(68, 14), // "newGameRequest"
QT_MOC_LITERAL(83, 10) // "playerName"

    },
    "NewGameState\0changeStateRequest\0\0"
    "newState\0issueConsoleOutput\0output\0"
    "newGameRequest\0playerName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewGameState[] = {

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
       4,    1,   35,    2, 0x06,    2 /* Public */,
       6,    1,   38,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void NewGameState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewGameState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeStateRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->newGameRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NewGameState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewGameState::changeStateRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NewGameState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewGameState::issueConsoleOutput)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NewGameState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewGameState::newGameRequest)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject NewGameState::staticMetaObject = { {
    QMetaObject::SuperData::link<IStates::staticMetaObject>(),
    qt_meta_stringdata_NewGameState.offsetsAndSize,
    qt_meta_data_NewGameState,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_NewGameState_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *NewGameState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewGameState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewGameState.stringdata0))
        return static_cast<void*>(this);
    return IStates::qt_metacast(_clname);
}

int NewGameState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NewGameState::changeStateRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NewGameState::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NewGameState::newGameRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
