/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[19];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 21), // "on_btn_update_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "httpReadyRead"
QT_MOC_LITERAL(4, 44, 12), // "httpFinished"
QT_MOC_LITERAL(5, 57, 14), // "widget_1_event"
QT_MOC_LITERAL(6, 72, 12), // "QMouseEvent*"
QT_MOC_LITERAL(7, 85, 14), // "widget_2_event"
QT_MOC_LITERAL(8, 100, 14), // "widget_3_event"
QT_MOC_LITERAL(9, 115, 18), // "widget_chart_event"
QT_MOC_LITERAL(10, 134, 6), // "update"
QT_MOC_LITERAL(11, 141, 17), // "anchorClickedSlot"
QT_MOC_LITERAL(12, 159, 3), // "url"
QT_MOC_LITERAL(13, 163, 10), // "drawCharts"
QT_MOC_LITERAL(14, 174, 2), // "id"
QT_MOC_LITERAL(15, 177, 20), // "on_btn_about_clicked"
QT_MOC_LITERAL(16, 198, 10), // "closeEvent"
QT_MOC_LITERAL(17, 209, 12), // "QCloseEvent*"
QT_MOC_LITERAL(18, 222, 3) // "win"

    },
    "Dialog\0on_btn_update_clicked\0\0"
    "httpReadyRead\0httpFinished\0widget_1_event\0"
    "QMouseEvent*\0widget_2_event\0widget_3_event\0"
    "widget_chart_event\0update\0anchorClickedSlot\0"
    "url\0drawCharts\0id\0on_btn_about_clicked\0"
    "closeEvent\0QCloseEvent*\0win"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    1,   77,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       8,    1,   83,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_update_clicked(); break;
        case 1: _t->httpReadyRead(); break;
        case 2: _t->httpFinished(); break;
        case 3: _t->widget_1_event((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->widget_2_event((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->widget_3_event((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->widget_chart_event((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->update(); break;
        case 8: _t->anchorClickedSlot((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 9: _t->drawCharts((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_btn_about_clicked(); break;
        case 11: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog.data,
      qt_meta_data_Dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
