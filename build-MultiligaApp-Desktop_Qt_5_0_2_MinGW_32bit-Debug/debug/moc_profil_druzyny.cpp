/****************************************************************************
** Meta object code from reading C++ file 'profil_druzyny.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IPR-master/profil_druzyny.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profil_druzyny.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_profil_druzyny_t {
    QByteArrayData data[9];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_profil_druzyny_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_profil_druzyny_t qt_meta_stringdata_profil_druzyny = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 21),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 12),
QT_MOC_LITERAL(4, 51, 12),
QT_MOC_LITERAL(5, 64, 8),
QT_MOC_LITERAL(6, 73, 1),
QT_MOC_LITERAL(7, 75, 11),
QT_MOC_LITERAL(8, 87, 23)
    },
    "profil_druzyny\0on_pushButton_clicked\0"
    "\0wczytaj_dane\0ustawWidgety\0Document\0"
    "d\0ustawTabele\0on_pushButton_4_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_profil_druzyny[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08,
       3,    0,   40,    2, 0x08,
       4,    1,   41,    2, 0x08,
       7,    1,   44,    2, 0x08,
       8,    0,   47,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void profil_druzyny::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        profil_druzyny *_t = static_cast<profil_druzyny *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->wczytaj_dane(); break;
        case 2: _t->ustawWidgety((*reinterpret_cast< const Document(*)>(_a[1]))); break;
        case 3: _t->ustawTabele((*reinterpret_cast< const Document(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject profil_druzyny::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_profil_druzyny.data,
      qt_meta_data_profil_druzyny,  qt_static_metacall, 0, 0}
};


const QMetaObject *profil_druzyny::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *profil_druzyny::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_profil_druzyny.stringdata))
        return static_cast<void*>(const_cast< profil_druzyny*>(this));
    return QDialog::qt_metacast(_clname);
}

int profil_druzyny::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
