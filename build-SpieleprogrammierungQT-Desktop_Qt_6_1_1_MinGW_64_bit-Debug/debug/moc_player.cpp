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
    const uint offsetsAndSize[50];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Player_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Player_t qt_meta_stringdata_Player = {
    {
QT_MOC_LITERAL(0, 6), // "Player"
QT_MOC_LITERAL(7, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 6), // "output"
QT_MOC_LITERAL(34, 5), // "moved"
QT_MOC_LITERAL(40, 11), // "lastFieldId"
QT_MOC_LITERAL(52, 10), // "newFieldId"
QT_MOC_LITERAL(63, 13), // "pickedUpItems"
QT_MOC_LITERAL(77, 8), // "itemName"
QT_MOC_LITERAL(86, 6), // "amount"
QT_MOC_LITERAL(93, 12), // "droppedItems"
QT_MOC_LITERAL(106, 23), // "ListAvailableSavePoints"
QT_MOC_LITERAL(130, 4), // "Move"
QT_MOC_LITERAL(135, 9), // "direction"
QT_MOC_LITERAL(145, 16), // "PickUpItemOfType"
QT_MOC_LITERAL(162, 8), // "itemType"
QT_MOC_LITERAL(171, 25), // "PickUpMultipleItemsOfType"
QT_MOC_LITERAL(197, 13), // "numberOfItems"
QT_MOC_LITERAL(211, 20), // "PickUpAllItemsOfType"
QT_MOC_LITERAL(232, 14), // "DropItemOfType"
QT_MOC_LITERAL(247, 23), // "DropMultipleItemsOfType"
QT_MOC_LITERAL(271, 18), // "DropAllItemsOfType"
QT_MOC_LITERAL(290, 25), // "ListAvailableItemsOnField"
QT_MOC_LITERAL(316, 13), // "ListInventory"
QT_MOC_LITERAL(330, 19) // "GetFieldDescription"

    },
    "Player\0issueConsoleOutput\0\0output\0"
    "moved\0lastFieldId\0newFieldId\0pickedUpItems\0"
    "itemName\0amount\0droppedItems\0"
    "ListAvailableSavePoints\0Move\0direction\0"
    "PickUpItemOfType\0itemType\0"
    "PickUpMultipleItemsOfType\0numberOfItems\0"
    "PickUpAllItemsOfType\0DropItemOfType\0"
    "DropMultipleItemsOfType\0DropAllItemsOfType\0"
    "ListAvailableItemsOnField\0ListInventory\0"
    "GetFieldDescription"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Player[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,    0 /* Public */,
       4,    2,  107,    2, 0x06,    2 /* Public */,
       7,    2,  112,    2, 0x06,    5 /* Public */,
      10,    2,  117,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,  122,    2, 0x0a,   11 /* Public */,
      12,    1,  123,    2, 0x0a,   12 /* Public */,
      14,    1,  126,    2, 0x0a,   14 /* Public */,
      16,    2,  129,    2, 0x0a,   16 /* Public */,
      18,    1,  134,    2, 0x0a,   19 /* Public */,
      19,    1,  137,    2, 0x0a,   21 /* Public */,
      20,    2,  140,    2, 0x0a,   23 /* Public */,
      21,    1,  145,    2, 0x0a,   26 /* Public */,
      22,    0,  148,    2, 0x0a,   28 /* Public */,
      23,    0,  149,    2, 0x0a,   29 /* Public */,
      24,    0,  150,    2, 0x0a,   30 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::QString, QMetaType::QString,   15,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,   15,   17,
    QMetaType::QString, QMetaType::QString,   15,
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,   15,   17,
    QMetaType::QString, QMetaType::QString,   15,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Player *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->moved((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->pickedUpItems((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->droppedItems((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { QString _r = _t->ListAvailableSavePoints();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->Move((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { QString _r = _t->PickUpItemOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->PickUpMultipleItemsOfType((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->PickUpAllItemsOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->DropItemOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->DropMultipleItemsOfType((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->DropAllItemsOfType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->ListAvailableItemsOnField();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->ListInventory(); break;
        case 14: _t->GetFieldDescription(); break;
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
        {
            using _t = void (Player::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::moved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Player::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::pickedUpItems)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Player::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::droppedItems)) {
                *result = 3;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Player::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Player::moved(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Player::pickedUpItems(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Player::droppedItems(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
