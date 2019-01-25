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
    char stringdata[191];
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
QT_MOC_LITERAL(3, 38, 16),
QT_MOC_LITERAL(4, 55, 23),
QT_MOC_LITERAL(5, 79, 18),
QT_MOC_LITERAL(6, 98, 48),
QT_MOC_LITERAL(7, 147, 29),
QT_MOC_LITERAL(8, 177, 12)
    },
    "profil_druzyny\0on_pushButton_clicked\0"
    "\0wyswietl_druzyne\0on_pushButton_4_clicked\0"
    "czy_nalezy_do_ligi\0"
    "aktywuj_przycisk_zapraszania_i_zablokuj_usuwania\0"
    "zablokuj_przycisk_zapraszania\0"
    "wczytaj_ligi\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_profil_druzyny[] = {

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
       1,    0,   49,    2, 0x08,
       3,    0,   50,    2, 0x08,
       4,    0,   51,    2, 0x08,
       5,    0,   52,    2, 0x08,
       6,    0,   53,    2, 0x08,
       7,    0,   54,    2, 0x08,
       8,    0,   55,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void profil_druzyny::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        profil_druzyny *_t = static_cast<profil_druzyny *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->wyswietl_druzyne(); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        case 3: { bool _r = _t->czy_nalezy_do_ligi();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->aktywuj_przycisk_zapraszania_i_zablokuj_usuwania(); break;
        case 5: _t->zablokuj_przycisk_zapraszania(); break;
        case 6: _t->wczytaj_ligi(); break;
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
