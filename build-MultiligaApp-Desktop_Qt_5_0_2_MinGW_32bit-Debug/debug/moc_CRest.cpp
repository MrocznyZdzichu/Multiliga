/****************************************************************************
** Meta object code from reading C++ file 'CRest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IPR-master/CRest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CRest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CRest_t {
    QByteArrayData data[10];
    char stringdata[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CRest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CRest_t qt_meta_stringdata_CRest = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 10),
QT_MOC_LITERAL(2, 17, 0),
QT_MOC_LITERAL(3, 18, 13),
QT_MOC_LITERAL(4, 32, 4),
QT_MOC_LITERAL(5, 37, 12),
QT_MOC_LITERAL(6, 50, 20),
QT_MOC_LITERAL(7, 71, 18),
QT_MOC_LITERAL(8, 90, 15),
QT_MOC_LITERAL(9, 106, 13)
    },
    "CRest\0wrongLogin\0\0wrongPassword\0comm\0"
    "fileNotFound\0addGamingPlaceResult\0"
    "updateGamingPlaces\0addLeagueResult\0"
    "updateLeagues\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CRest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x05,
       3,    1,   50,    2, 0x05,
       5,    1,   53,    2, 0x05,
       6,    1,   56,    2, 0x05,
       7,    0,   59,    2, 0x05,
       8,    1,   60,    2, 0x05,
       9,    0,   63,    2, 0x05,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void CRest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CRest *_t = static_cast<CRest *>(_o);
        switch (_id) {
        case 0: _t->wrongLogin(); break;
        case 1: _t->wrongPassword((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->fileNotFound((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->addGamingPlaceResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateGamingPlaces(); break;
        case 5: _t->addLeagueResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->updateLeagues(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CRest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CRest::wrongLogin)) {
                *result = 0;
            }
        }
        {
            typedef void (CRest::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CRest::wrongPassword)) {
                *result = 1;
            }
        }
        {
            typedef void (CRest::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CRest::fileNotFound)) {
                *result = 2;
            }
        }
        {
            typedef void (CRest::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CRest::addGamingPlaceResult)) {
                *result = 3;
            }
        }
        {
            typedef void (CRest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CRest::updateGamingPlaces)) {
                *result = 4;
            }
        }
        {
            typedef void (CRest::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CRest::addLeagueResult)) {
                *result = 5;
            }
        }
        {
            typedef void (CRest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CRest::updateLeagues)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject CRest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CRest.data,
      qt_meta_data_CRest,  qt_static_metacall, 0, 0}
};


const QMetaObject *CRest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CRest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRest.stringdata))
        return static_cast<void*>(const_cast< CRest*>(this));
    return QObject::qt_metacast(_clname);
}

int CRest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CRest::wrongLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CRest::wrongPassword(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CRest::fileNotFound(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CRest::addGamingPlaceResult(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CRest::updateGamingPlaces()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void CRest::addLeagueResult(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CRest::updateLeagues()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
