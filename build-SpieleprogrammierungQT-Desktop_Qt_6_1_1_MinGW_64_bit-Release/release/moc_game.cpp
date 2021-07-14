/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Game_t {
    const uint offsetsAndSize[42];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Game_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Game_t qt_meta_stringdata_Game = {
    {
QT_MOC_LITERAL(0, 4), // "Game"
QT_MOC_LITERAL(5, 18), // "issueConsoleOutput"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 6), // "output"
QT_MOC_LITERAL(32, 23), // "loadButtonImagesRequest"
QT_MOC_LITERAL(56, 24), // "updateButtonImageRequest"
QT_MOC_LITERAL(81, 9), // "imageName"
QT_MOC_LITERAL(91, 10), // "buttonName"
QT_MOC_LITERAL(102, 7), // "NewGame"
QT_MOC_LITERAL(110, 10), // "playerName"
QT_MOC_LITERAL(121, 8), // "LoadGame"
QT_MOC_LITERAL(130, 14), // "savepointIndex"
QT_MOC_LITERAL(145, 8), // "SaveGame"
QT_MOC_LITERAL(154, 13), // "HandleCommand"
QT_MOC_LITERAL(168, 7), // "command"
QT_MOC_LITERAL(176, 11), // "ChangeState"
QT_MOC_LITERAL(188, 9), // "stateName"
QT_MOC_LITERAL(198, 14), // "ListSavePoints"
QT_MOC_LITERAL(213, 21), // "ListSavePointsForMenu"
QT_MOC_LITERAL(235, 17), // "SetStateToNewGame"
QT_MOC_LITERAL(253, 21) // "SetStateToInitialLoad"

    },
    "Game\0issueConsoleOutput\0\0output\0"
    "loadButtonImagesRequest\0"
    "updateButtonImageRequest\0imageName\0"
    "buttonName\0NewGame\0playerName\0LoadGame\0"
    "savepointIndex\0SaveGame\0HandleCommand\0"
    "command\0ChangeState\0stateName\0"
    "ListSavePoints\0ListSavePointsForMenu\0"
    "SetStateToNewGame\0SetStateToInitialLoad"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Game[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    0 /* Public */,
       4,    0,   89,    2, 0x06,    2 /* Public */,
       5,    2,   90,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   95,    2, 0x0a,    6 /* Public */,
      10,    1,   98,    2, 0x0a,    8 /* Public */,
      12,    0,  101,    2, 0x0a,   10 /* Public */,
      13,    1,  102,    2, 0x0a,   11 /* Public */,
      15,    1,  105,    2, 0x0a,   13 /* Public */,
      17,    0,  108,    2, 0x0a,   15 /* Public */,
      18,    0,  109,    2, 0x0a,   16 /* Public */,
      19,    0,  110,    2, 0x0a,   17 /* Public */,
      20,    0,  111,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Bool, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Game *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->issueConsoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->loadButtonImagesRequest(); break;
        case 2: _t->updateButtonImageRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->NewGame((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { bool _r = _t->LoadGame((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->SaveGame(); break;
        case 6: _t->HandleCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->ChangeState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->ListSavePoints(); break;
        case 9: _t->ListSavePointsForMenu(); break;
        case 10: _t->SetStateToNewGame(); break;
        case 11: _t->SetStateToInitialLoad(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Game::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::issueConsoleOutput)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Game::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::loadButtonImagesRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Game::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::updateButtonImageRequest)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Game::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Game.offsetsAndSize,
    qt_meta_data_Game,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Game_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Game.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Game::issueConsoleOutput(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Game::loadButtonImagesRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Game::updateButtonImageRequest(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
