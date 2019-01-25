/****************************************************************************
** Meta object code from reading C++ file 'zarzadzaj_ligami.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IPR-master/zarzadzaj_ligami.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zarzadzaj_ligami.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_zarzadzaj_ligami_t {
    QByteArrayData data[8];
    char stringdata[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_zarzadzaj_ligami_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_zarzadzaj_ligami_t qt_meta_stringdata_zarzadzaj_ligami = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 28),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 10),
QT_MOC_LITERAL(4, 58, 12),
QT_MOC_LITERAL(5, 71, 12),
QT_MOC_LITERAL(6, 84, 4),
QT_MOC_LITERAL(7, 89, 23)
    },
    "zarzadzaj_ligami\0on_commandLinkButton_clicked\0"
    "\0aktualizuj\0wczytaj_dane\0fileNotFound\0"
    "comm\0on_pushButton_3_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zarzadzaj_ligami[] = {

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
       4,    0,   41,    2, 0x08,
       5,    1,   42,    2, 0x08,
       7,    0,   45,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void zarzadzaj_ligami::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        zarzadzaj_ligami *_t = static_cast<zarzadzaj_ligami *>(_o);
        switch (_id) {
        case 0: _t->on_commandLinkButton_clicked(); break;
        case 1: _t->aktualizuj(); break;
        case 2: _t->wczytaj_dane(); break;
        case 3: _t->fileNotFound((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject zarzadzaj_ligami::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_zarzadzaj_ligami.data,
      qt_meta_data_zarzadzaj_ligami,  qt_static_metacall, 0, 0}
};


const QMetaObject *zarzadzaj_ligami::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zarzadzaj_ligami::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_zarzadzaj_ligami.stringdata))
        return static_cast<void*>(const_cast< zarzadzaj_ligami*>(this));
    return QDialog::qt_metacast(_clname);
}

int zarzadzaj_ligami::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
