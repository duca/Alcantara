/****************************************************************************
** Meta object code from reading C++ file 'singleInstance.h'
**
** Created: Sun Dec 2 10:56:29 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/singleInstance.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singleInstance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_singleInstance[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      36,   15,   15,   15, 0x05,
      52,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   79,   71,   15, 0x4a,

       0        // eod
};

static const char qt_meta_stringdata_singleInstance[] = {
    "singleInstance\0\0newInstanceOpened()\0"
    "firstInstance()\0notFirstInstance()\0"
    "QString\0arg\0showwindow(QString)\0"
};

void singleInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        singleInstance *_t = static_cast<singleInstance *>(_o);
        switch (_id) {
        case 0: _t->newInstanceOpened(); break;
        case 1: _t->firstInstance(); break;
        case 2: _t->notFirstInstance(); break;
        case 3: { QString _r = _t->showwindow((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData singleInstance::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject singleInstance::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_singleInstance,
      qt_meta_data_singleInstance, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &singleInstance::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *singleInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *singleInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_singleInstance))
        return static_cast<void*>(const_cast< singleInstance*>(this));
    return QObject::qt_metacast(_clname);
}

int singleInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void singleInstance::newInstanceOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void singleInstance::firstInstance()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void singleInstance::notFirstInstance()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
