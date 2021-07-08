/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Player_t {
    const uint offsetsAndSize[36];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Player_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Player_t qt_meta_stringdata_Player = {
    {
QT_MOC_LITERAL(0, 6), // "Player"
QT_MOC_LITERAL(7, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 6), // "output"
QT_MOC_LITERAL(34, 23), // "ListAvailableSavePoints"
QT_MOC_LITERAL(58, 4), // "Move"
QT_MOC_LITERAL(63, 9), // "direction"
QT_MOC_LITERAL(73, 16), // "PickUpItemOfType"
QT_MOC_LITERAL(90, 8), // "itemType"
QT_MOC_LITERAL(99, 25), // "PickUpMultipleItemsOfType"
QT_MOC_LITERAL(125, 13), // "numberOfItems"
QT_MOC_LITERAL(139, 20), // "PickUpAllItemsOfType"
QT_MOC_LITERAL(160, 14), // "DropItemOfType"
QT_MOC_LITERAL(175, 8), // "itemName"
QT_MOC_LITERAL(184, 23), // "DropMultipleItemsOfType"
QT_MOC_LITERAL(208, 18), // "DropAllItemsOfType"
QT_MOC_LITERAL(227, 18), // "ListAvailableItems"
QT_MOC_LITERAL(246, 19) // "GetFieldDescription"

    },
    "Player\0issueConsoleOutput\0\0output\0"
    "ListAvailableSavePoints\0Move\0direction\0"
    "PickUpItemOfType\0itemType\0"
    "PickUpMultipleItemsOfType\0numberOfItems\0"
    "PickUpAllItemsOfType\0DropItemOfType\0"
    "itemName\0DropMultipleItemsOfType\0"
    "DropAllItemsOfType\0ListAvailableItems\0"
    "GetFieldDescription"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Player[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   83,    2, 0x0a,    2 /* Public */,
       5,    1,   84,    2, 0x0a,    3 /* Public */,
       7,    1,   87,    2, 0x0a,    5 /* Public */,
       9,    2,   90,    2, 0x0a,    7 /* Public */,
      11,    1,   95,    2, 0x0a,   10 /* Public */,
      12,    1,   98,    2, 0x0a,   12 /* Public */,
      14,    2,  101,    2, 0x0a,   14 /* Public */,
      15,    1,  106,    2, 0x0a,   17 /* Public */,
      16,    0,  109,    2, 0x0a,   19 /* Public */,
      17,    0,  110,    2, 0x0a,   20 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,    6,
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,    8,   10,
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QString, QMetaType::QString,   13,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,    8,   10,
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QString,
    QMetaType::QString,

       0        // eod
};

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Player *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: { QString _r = _t->ListAvailableSavePoints();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->Move((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->PickUpItemOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->PickUpMultipleItemsOfType((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->PickUpAllItemsOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->DropItemOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->DropMultipleItemsOfType((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->DropAllItemsOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->ListAvailableItems();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->GetFieldDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Player::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::issueConsoleOutput)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Player.offsetsAndSize,
    qt_meta_data_Player,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Player_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Player.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Player::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
