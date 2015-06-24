/****************************************************************************
** Meta object code from reading C++ file 'taskmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TaskManager/taskmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TaskManager_t {
    QByteArrayData data[16];
    char stringdata[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TaskManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TaskManager_t qt_meta_stringdata_TaskManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TaskManager"
QT_MOC_LITERAL(1, 12, 22), // "on_pbtnDayBack_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "on_pbtnToday_clicked"
QT_MOC_LITERAL(4, 57, 22), // "on_pbtnDayNext_clicked"
QT_MOC_LITERAL(5, 80, 24), // "on_dteSearch_dateChanged"
QT_MOC_LITERAL(6, 105, 4), // "date"
QT_MOC_LITERAL(7, 110, 25), // "on_pbtnCreateTask_clicked"
QT_MOC_LITERAL(8, 136, 24), // "on_tvTasks_doubleClicked"
QT_MOC_LITERAL(9, 161, 5), // "index"
QT_MOC_LITERAL(10, 167, 21), // "slotCreationCompleted"
QT_MOC_LITERAL(11, 189, 18), // "on_tvTasks_pressed"
QT_MOC_LITERAL(12, 208, 22), // "on_tvTimeTable_clicked"
QT_MOC_LITERAL(13, 231, 24), // "slotTimeTableDataChanged"
QT_MOC_LITERAL(14, 256, 7), // "topLeft"
QT_MOC_LITERAL(15, 264, 11) // "bottomRight"

    },
    "TaskManager\0on_pbtnDayBack_clicked\0\0"
    "on_pbtnToday_clicked\0on_pbtnDayNext_clicked\0"
    "on_dteSearch_dateChanged\0date\0"
    "on_pbtnCreateTask_clicked\0"
    "on_tvTasks_doubleClicked\0index\0"
    "slotCreationCompleted\0on_tvTasks_pressed\0"
    "on_tvTimeTable_clicked\0slotTimeTableDataChanged\0"
    "topLeft\0bottomRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TaskManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,
      12,    1,   78,    2, 0x08 /* Private */,
      13,    2,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   14,   15,

       0        // eod
};

void TaskManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskManager *_t = static_cast<TaskManager *>(_o);
        switch (_id) {
        case 0: _t->on_pbtnDayBack_clicked(); break;
        case 1: _t->on_pbtnToday_clicked(); break;
        case 2: _t->on_pbtnDayNext_clicked(); break;
        case 3: _t->on_dteSearch_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 4: _t->on_pbtnCreateTask_clicked(); break;
        case 5: _t->on_tvTasks_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->slotCreationCompleted(); break;
        case 7: _t->on_tvTasks_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_tvTimeTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->slotTimeTableDataChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject TaskManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TaskManager.data,
      qt_meta_data_TaskManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TaskManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TaskManager.stringdata))
        return static_cast<void*>(const_cast< TaskManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int TaskManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
