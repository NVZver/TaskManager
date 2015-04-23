/****************************************************************************
** Meta object code from reading C++ file 'customersearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TaskManager/customersearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customersearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CustomerSearch_t {
    QByteArrayData data[17];
    char stringdata[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomerSearch_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomerSearch_t qt_meta_stringdata_CustomerSearch = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CustomerSearch"
QT_MOC_LITERAL(1, 15, 17), // "CreationCompleted"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 32), // "on_lntContractNumber_textChanged"
QT_MOC_LITERAL(4, 67, 4), // "arg1"
QT_MOC_LITERAL(5, 72, 29), // "on_lntPhoneNumber_textChanged"
QT_MOC_LITERAL(6, 102, 23), // "on_lntLName_textChanged"
QT_MOC_LITERAL(7, 126, 26), // "on_lntLocality_textChanged"
QT_MOC_LITERAL(8, 153, 24), // "on_lntStreet_textChanged"
QT_MOC_LITERAL(9, 178, 23), // "on_lntHouse_textChanged"
QT_MOC_LITERAL(10, 202, 27), // "on_lntApartment_textChanged"
QT_MOC_LITERAL(11, 230, 28), // "on_tvCustomers_doubleClicked"
QT_MOC_LITERAL(12, 259, 5), // "index"
QT_MOC_LITERAL(13, 265, 25), // "on_chbxNoCustomer_clicked"
QT_MOC_LITERAL(14, 291, 25), // "on_pbtnCreateTask_clicked"
QT_MOC_LITERAL(15, 317, 22), // "on_tvCustomers_pressed"
QT_MOC_LITERAL(16, 340, 22) // "on_tvCustomers_clicked"

    },
    "CustomerSearch\0CreationCompleted\0\0"
    "on_lntContractNumber_textChanged\0arg1\0"
    "on_lntPhoneNumber_textChanged\0"
    "on_lntLName_textChanged\0"
    "on_lntLocality_textChanged\0"
    "on_lntStreet_textChanged\0"
    "on_lntHouse_textChanged\0"
    "on_lntApartment_textChanged\0"
    "on_tvCustomers_doubleClicked\0index\0"
    "on_chbxNoCustomer_clicked\0"
    "on_pbtnCreateTask_clicked\0"
    "on_tvCustomers_pressed\0on_tvCustomers_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomerSearch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   80,    2, 0x08 /* Private */,
       5,    1,   83,    2, 0x08 /* Private */,
       6,    1,   86,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
       9,    1,   95,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x08 /* Private */,
      11,    1,  101,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    1,  106,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QModelIndex,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   12,
    QMetaType::Void, QMetaType::QModelIndex,   12,

       0        // eod
};

void CustomerSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomerSearch *_t = static_cast<CustomerSearch *>(_o);
        switch (_id) {
        case 0: _t->CreationCompleted(); break;
        case 1: _t->on_lntContractNumber_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lntPhoneNumber_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lntLName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_lntLocality_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_lntStreet_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lntHouse_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_lntApartment_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_tvCustomers_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_chbxNoCustomer_clicked(); break;
        case 10: _t->on_pbtnCreateTask_clicked(); break;
        case 11: _t->on_tvCustomers_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->on_tvCustomers_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CustomerSearch::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomerSearch::CreationCompleted)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CustomerSearch::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CustomerSearch.data,
      qt_meta_data_CustomerSearch,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomerSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomerSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomerSearch.stringdata))
        return static_cast<void*>(const_cast< CustomerSearch*>(this));
    return QWidget::qt_metacast(_clname);
}

int CustomerSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void CustomerSearch::CreationCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
