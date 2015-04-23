/****************************************************************************
** Meta object code from reading C++ file 'task.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TaskManager/task.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'task.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Task_t {
    QByteArrayData data[8];
    char stringdata[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Task_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Task_t qt_meta_stringdata_Task = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Task"
QT_MOC_LITERAL(1, 5, 17), // "CreationCompleted"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "on_pbtnCreate_clicked"
QT_MOC_LITERAL(4, 46, 21), // "on_pbtnCancel_clicked"
QT_MOC_LITERAL(5, 68, 25), // "on_pbtnAddProblem_clicked"
QT_MOC_LITERAL(6, 94, 17), // "slotRemoveProblem"
QT_MOC_LITERAL(7, 112, 2) // "id"

    },
    "Task\0CreationCompleted\0\0on_pbtnCreate_clicked\0"
    "on_pbtnCancel_clicked\0on_pbtnAddProblem_clicked\0"
    "slotRemoveProblem\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Task[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Task *_t = static_cast<Task *>(_o);
        switch (_id) {
        case 0: _t->CreationCompleted(); break;
        case 1: _t->on_pbtnCreate_clicked(); break;
        case 2: _t->on_pbtnCancel_clicked(); break;
        case 3: _t->on_pbtnAddProblem_clicked(); break;
        case 4: _t->slotRemoveProblem((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Task::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Task::CreationCompleted)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Task::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Task.data,
      qt_meta_data_Task,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Task::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Task.stringdata))
        return static_cast<void*>(const_cast< Task*>(this));
    return QWidget::qt_metacast(_clname);
}

int Task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Task::CreationCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
