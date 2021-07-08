/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpieleprogrammierungQT/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[40];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 15), // "receivedCommand"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 7), // "command"
QT_MOC_LITERAL(36, 15), // "on_Send_clicked"
QT_MOC_LITERAL(52, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(78, 6), // "dotext"
QT_MOC_LITERAL(85, 21), // "on_lineEdit_upPressed"
QT_MOC_LITERAL(107, 29), // "on_pushButton_newgame_clicked"
QT_MOC_LITERAL(137, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(159, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(186, 5), // "index"
QT_MOC_LITERAL(192, 27), // "on_pushButton_titel_clicked"
QT_MOC_LITERAL(220, 27), // "on_pushButton_leave_clicked"
QT_MOC_LITERAL(248, 26), // "on_pushButton_help_clicked"
QT_MOC_LITERAL(275, 21), // "on_downbutton_clicked"
QT_MOC_LITERAL(297, 19), // "on_upbutton_clicked"
QT_MOC_LITERAL(317, 26), // "on_tableWidget_cellClicked"
QT_MOC_LITERAL(344, 3), // "row"
QT_MOC_LITERAL(348, 6) // "column"

    },
    "MainWindow\0receivedCommand\0\0command\0"
    "on_Send_clicked\0on_lineEdit_returnPressed\0"
    "dotext\0on_lineEdit_upPressed\0"
    "on_pushButton_newgame_clicked\0"
    "on_pushButton_clicked\0on_tabWidget_tabBarClicked\0"
    "index\0on_pushButton_titel_clicked\0"
    "on_pushButton_leave_clicked\0"
    "on_pushButton_help_clicked\0"
    "on_downbutton_clicked\0on_upbutton_clicked\0"
    "on_tableWidget_cellClicked\0row\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  101,    2, 0x08,    2 /* Private */,
       5,    0,  102,    2, 0x08,    3 /* Private */,
       6,    0,  103,    2, 0x08,    4 /* Private */,
       7,    0,  104,    2, 0x08,    5 /* Private */,
       8,    0,  105,    2, 0x08,    6 /* Private */,
       9,    0,  106,    2, 0x08,    7 /* Private */,
      10,    1,  107,    2, 0x08,    8 /* Private */,
      12,    0,  110,    2, 0x08,   10 /* Private */,
      13,    0,  111,    2, 0x08,   11 /* Private */,
      14,    0,  112,    2, 0x08,   12 /* Private */,
      15,    0,  113,    2, 0x08,   13 /* Private */,
      16,    0,  114,    2, 0x08,   14 /* Private */,
      17,    2,  115,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->receivedCommand((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_Send_clicked(); break;
        case 2: _t->on_lineEdit_returnPressed(); break;
        case 3: _t->dotext(); break;
        case 4: _t->on_lineEdit_upPressed(); break;
        case 5: _t->on_pushButton_newgame_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_titel_clicked(); break;
        case 9: _t->on_pushButton_leave_clicked(); break;
        case 10: _t->on_pushButton_help_clicked(); break;
        case 11: _t->on_downbutton_clicked(); break;
        case 12: _t->on_upbutton_clicked(); break;
        case 13: _t->on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::receivedCommand)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::receivedCommand(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
