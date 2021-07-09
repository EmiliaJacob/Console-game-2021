/****************************************************************************
** Meta object code from reading C++ file 'fasttravelstate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/fasttravelstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fasttravelstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FastTravelState_t {
    const uint offsetsAndSize[18];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FastTravelState_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FastTravelState_t qt_meta_stringdata_FastTravelState = {
    {
QT_MOC_LITERAL(0, 15), // "FastTravelState"
QT_MOC_LITERAL(16, 18), // "changeStateRequest"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 8), // "newState"
QT_MOC_LITERAL(45, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(64, 6), // "output"
QT_MOC_LITERAL(71, 17), // "fastTravelRequest"
QT_MOC_LITERAL(89, 11), // "destination"
QT_MOC_LITERAL(101, 21) // "listSavePointsRequest"

    },
    "FastTravelState\0changeStateRequest\0\0"
    "newState\0issueConsoleOutput\0output\0"
    "fastTravelRequest\0destination\0"
    "listSavePointsRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FastTravelState[] = {

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
       4,    1,   41,    2, 0x06,    2 /* Public */,
       6,    1,   44,    2, 0x06,    4 /* Public */,
       8,    0,   47,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void FastTravelState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FastTravelState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeStateRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->fastTravelRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->listSavePointsRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FastTravelState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FastTravelState::changeStateRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FastTravelState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FastTravelState::issueConsoleOutput)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FastTravelState::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FastTravelState::fastTravelRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FastTravelState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FastTravelState::listSavePointsRequest)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject FastTravelState::staticMetaObject = { {
    QMetaObject::SuperData::link<IStates::staticMetaObject>(),
    qt_meta_stringdata_FastTravelState.offsetsAndSize,
    qt_meta_data_FastTravelState,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FastTravelState_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *FastTravelState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FastTravelState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FastTravelState.stringdata0))
        return static_cast<void*>(this);
    return IStates::qt_metacast(_clname);
}

int FastTravelState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FastTravelState::changeStateRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FastTravelState::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FastTravelState::fastTravelRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FastTravelState::listSavePointsRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
