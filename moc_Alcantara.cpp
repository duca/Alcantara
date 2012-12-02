/****************************************************************************
** Meta object code from reading C++ file 'Alcantara.h'
**
** Created: Sun Dec 2 10:56:27 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/Alcantara.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Alcantara.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Alcantara[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   10,   10,   10, 0x0a,
      52,   47,   10,   10, 0x08,
      72,   10,   10,   10, 0x08,
      87,   82,   10,   10, 0x08,
     129,  117,   10,   10, 0x08,
     145,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Alcantara[] = {
    "Alcantara\0\0selectedApp()\0clearAppSearchEntry()\0"
    "name\0searchName(QString)\0openApp()\0"
    "item\0openAppItem(QListWidgetItem*)\0"
    "programName\0launch(QString)\0"
    "cleanProcesslist()\0"
};

void Alcantara::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Alcantara *_t = static_cast<Alcantara *>(_o);
        switch (_id) {
        case 0: _t->selectedApp(); break;
        case 1: _t->clearAppSearchEntry(); break;
        case 2: _t->searchName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->openApp(); break;
        case 4: _t->openAppItem((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->launch((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->cleanProcesslist(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Alcantara::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Alcantara::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Alcantara,
      qt_meta_data_Alcantara, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Alcantara::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Alcantara::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Alcantara::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Alcantara))
        return static_cast<void*>(const_cast< Alcantara*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Alcantara::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Alcantara::selectedApp()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
