/****************************************************************************
** Meta object code from reading C++ file 'gamewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gamewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GOLWidget_t {
    QByteArrayData data[11];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GOLWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GOLWidget_t qt_meta_stringdata_GOLWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GOLWidget"
QT_MOC_LITERAL(1, 10, 5), // "start"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "stop"
QT_MOC_LITERAL(4, 22, 4), // "tick"
QT_MOC_LITERAL(5, 27, 5), // "clear"
QT_MOC_LITERAL(6, 33, 9), // "paintGrid"
QT_MOC_LITERAL(7, 43, 9), // "QPainter&"
QT_MOC_LITERAL(8, 53, 1), // "p"
QT_MOC_LITERAL(9, 55, 10), // "paintCells"
QT_MOC_LITERAL(10, 66, 4) // "next"

    },
    "GOLWidget\0start\0\0stop\0tick\0clear\0"
    "paintGrid\0QPainter&\0p\0paintCells\0next"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GOLWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x08 /* Private */,
       9,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void GOLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GOLWidget *_t = static_cast<GOLWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->stop(); break;
        case 2: _t->tick(); break;
        case 3: _t->clear(); break;
        case 4: _t->paintGrid((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 5: _t->paintCells((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 6: _t->next(); break;
        default: ;
        }
    }
}

const QMetaObject GOLWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GOLWidget.data,
      qt_meta_data_GOLWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GOLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GOLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GOLWidget.stringdata0))
        return static_cast<void*>(const_cast< GOLWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int GOLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
