/****************************************************************************
** Meta object code from reading C++ file 'ListView.h'
**
** Created: Mon Oct 23 11:18:33 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Launcher/UserInterface/Common/ListView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ListView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   10,    9,    9, 0x05,
      45,   39,    9,    9, 0x05,
      75,   70,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,   10,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ListView[] = {
    "ListView\0\0persent\0scrollPersent(float)\0"
    "index\0listViewItemRelease(int)\0flag\0"
    "disableScrollbar(bool)\0setScrollPersent(float)\0"
};

const QMetaObject ListView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ListView,
      qt_meta_data_ListView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ListView))
        return static_cast<void*>(const_cast< ListView*>(this));
    return QWidget::qt_metacast(_clname);
}

int ListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: scrollPersent((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: listViewItemRelease((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: disableScrollbar((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: setScrollPersent((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ListView::scrollPersent(const float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ListView::listViewItemRelease(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ListView::disableScrollbar(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
