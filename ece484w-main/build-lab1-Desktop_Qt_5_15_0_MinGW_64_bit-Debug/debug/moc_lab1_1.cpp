/****************************************************************************
** Meta object code from reading C++ file 'lab1_1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab4/lab1_1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lab1_1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Lab1_1_t {
    QByteArrayData data[15];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lab1_1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lab1_1_t qt_meta_stringdata_Lab1_1 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Lab1_1"
QT_MOC_LITERAL(1, 7, 22), // "on_Base_Button_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 25), // "on_Overlay_Button_clicked"
QT_MOC_LITERAL(4, 57, 22), // "on_Text_Button_clicked"
QT_MOC_LITERAL(5, 80, 22), // "on_Save_Button_clicked"
QT_MOC_LITERAL(6, 103, 24), // "updateBrightnessContrast"
QT_MOC_LITERAL(7, 128, 28), // "on_brightness_sliderReleased"
QT_MOC_LITERAL(8, 157, 26), // "on_contrast_sliderReleased"
QT_MOC_LITERAL(9, 184, 19), // "on_sendbase_clicked"
QT_MOC_LITERAL(10, 204, 22), // "on_sendoverlay_clicked"
QT_MOC_LITERAL(11, 227, 25), // "on_sendbrightness_clicked"
QT_MOC_LITERAL(12, 253, 23), // "on_sendcontrast_clicked"
QT_MOC_LITERAL(13, 277, 18), // "on_display_clicked"
QT_MOC_LITERAL(14, 296, 15) // "on_exit_clicked"

    },
    "Lab1_1\0on_Base_Button_clicked\0\0"
    "on_Overlay_Button_clicked\0"
    "on_Text_Button_clicked\0on_Save_Button_clicked\0"
    "updateBrightnessContrast\0"
    "on_brightness_sliderReleased\0"
    "on_contrast_sliderReleased\0"
    "on_sendbase_clicked\0on_sendoverlay_clicked\0"
    "on_sendbrightness_clicked\0"
    "on_sendcontrast_clicked\0on_display_clicked\0"
    "on_exit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lab1_1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Lab1_1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Lab1_1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Base_Button_clicked(); break;
        case 1: _t->on_Overlay_Button_clicked(); break;
        case 2: _t->on_Text_Button_clicked(); break;
        case 3: _t->on_Save_Button_clicked(); break;
        case 4: _t->updateBrightnessContrast(); break;
        case 5: _t->on_brightness_sliderReleased(); break;
        case 6: _t->on_contrast_sliderReleased(); break;
        case 7: _t->on_sendbase_clicked(); break;
        case 8: _t->on_sendoverlay_clicked(); break;
        case 9: _t->on_sendbrightness_clicked(); break;
        case 10: _t->on_sendcontrast_clicked(); break;
        case 11: _t->on_display_clicked(); break;
        case 12: _t->on_exit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Lab1_1::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Lab1_1.data,
    qt_meta_data_Lab1_1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Lab1_1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lab1_1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Lab1_1.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Lab1_1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
