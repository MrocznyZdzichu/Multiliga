/****************************************************************************
** Meta object code from reading C++ file 'profil_dyscypliny.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IPR-master/profil_dyscypliny.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profil_dyscypliny.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_profil_dyscypliny_t {
    QByteArrayData data[1];
    char stringdata[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_profil_dyscypliny_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_profil_dyscypliny_t qt_meta_stringdata_profil_dyscypliny = {
    {
QT_MOC_LITERAL(0, 0, 17)
    },
    "profil_dyscypliny\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_profil_dyscypliny[] = {

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

void profil_dyscypliny::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject profil_dyscypliny::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_profil_dyscypliny.data,
      qt_meta_data_profil_dyscypliny,  qt_static_metacall, 0, 0}
};


const QMetaObject *profil_dyscypliny::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *profil_dyscypliny::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_profil_dyscypliny.stringdata))
        return static_cast<void*>(const_cast< profil_dyscypliny*>(this));
    return QDialog::qt_metacast(_clname);
}

int profil_dyscypliny::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
