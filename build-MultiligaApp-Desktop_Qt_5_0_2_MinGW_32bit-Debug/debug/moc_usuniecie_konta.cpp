/****************************************************************************
** Meta object code from reading C++ file 'usuniecie_konta.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IPR-master/usuniecie_konta.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usuniecie_konta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_usuniecie_konta_t {
    QByteArrayData data[1];
    char stringdata[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_usuniecie_konta_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_usuniecie_konta_t qt_meta_stringdata_usuniecie_konta = {
    {
QT_MOC_LITERAL(0, 0, 15)
    },
    "usuniecie_konta\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_usuniecie_konta[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void usuniecie_konta::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject usuniecie_konta::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_usuniecie_konta.data,
      qt_meta_data_usuniecie_konta,  qt_static_metacall, 0, 0}
};


const QMetaObject *usuniecie_konta::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *usuniecie_konta::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_usuniecie_konta.stringdata))
        return static_cast<void*>(const_cast< usuniecie_konta*>(this));
    return QDialog::qt_metacast(_clname);
}

int usuniecie_konta::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
