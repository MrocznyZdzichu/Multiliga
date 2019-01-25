/****************************************************************************
** Meta object code from reading C++ file 'wyszukaj_druzyne.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IPR-master/wyszukaj_druzyne.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wyszukaj_druzyne.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wyszukaj_druzyne_t {
    QByteArrayData data[10];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_wyszukaj_druzyne_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_wyszukaj_druzyne_t qt_meta_stringdata_wyszukaj_druzyne = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 12),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 23),
QT_MOC_LITERAL(4, 55, 23),
QT_MOC_LITERAL(5, 79, 13),
QT_MOC_LITERAL(6, 93, 7),
QT_MOC_LITERAL(7, 101, 26),
QT_MOC_LITERAL(8, 128, 3),
QT_MOC_LITERAL(9, 132, 6)
    },
    "wyszukaj_druzyne\0wczytaj_dane\0\0"
    "on_pushButton_3_clicked\0druzyny_do_wyswietlenia\0"
    "CListaDruzyn*\0druzyny\0on_tableWidget_cellClicked\0"
    "row\0column\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wyszukaj_druzyne[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08,
       3,    0,   35,    2, 0x08,
       4,    1,   36,    2, 0x08,
       7,    2,   39,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

       0        // eod
};

void wyszukaj_druzyne::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wyszukaj_druzyne *_t = static_cast<wyszukaj_druzyne *>(_o);
        switch (_id) {
        case 0: _t->wczytaj_dane(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->druzyny_do_wyswietlenia((*reinterpret_cast< CListaDruzyn*(*)>(_a[1]))); break;
        case 3: _t->on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject wyszukaj_druzyne::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_wyszukaj_druzyne.data,
      qt_meta_data_wyszukaj_druzyne,  qt_static_metacall, 0, 0}
};


const QMetaObject *wyszukaj_druzyne::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wyszukaj_druzyne::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wyszukaj_druzyne.stringdata))
        return static_cast<void*>(const_cast< wyszukaj_druzyne*>(this));
    return QDialog::qt_metacast(_clname);
}

int wyszukaj_druzyne::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
