/****************************************************************************
** Meta object code from reading C++ file 'SDDiskMusicListViewWidget.h'
**
** Created: Mon Oct 23 15:07:50 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Launcher/UserInterface/MainWidget/DiskWidget/SDDiskWidget/SDDiskListViewWidget/SDDiskMusicListViewWidget/SDDiskMusicListViewWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SDDiskMusicListViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SDDiskMusicListViewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   27,   26,   26, 0x09,
      81,   27,   26,   26, 0x09,
     121,  112,   26,   26, 0x09,
     164,  157,   26,   26, 0x09,
     199,  193,   26,   26, 0x08,
     231,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SDDiskMusicListViewWidget[] = {
    "SDDiskMusicListViewWidget\0\0type,status\0"
    "ontWidgetTypeChange(Widget::Type,QString)\0"
    "onDeviceWatcherStatus(int,int)\0type,xml\0"
    "onMusicPlayerFileNames(int,QString)\0"
    "status\0onMusicPlayerPlayStatus(int)\0"
    "index\0onMusicListViewItemRelease(int)\0"
    "onToolButtonRelease()\0"
};

void SDDiskMusicListViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SDDiskMusicListViewWidget *_t = static_cast<SDDiskMusicListViewWidget *>(_o);
        switch (_id) {
        case 0: _t->ontWidgetTypeChange((*reinterpret_cast< const Widget::Type(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onDeviceWatcherStatus((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->onMusicPlayerFileNames((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->onMusicPlayerPlayStatus((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->onMusicListViewItemRelease((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: _t->onToolButtonRelease(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SDDiskMusicListViewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SDDiskMusicListViewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SDDiskMusicListViewWidget,
      qt_meta_data_SDDiskMusicListViewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SDDiskMusicListViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SDDiskMusicListViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SDDiskMusicListViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SDDiskMusicListViewWidget))
        return static_cast<void*>(const_cast< SDDiskMusicListViewWidget*>(this));
    if (!strcmp(_clname, "Widget::Interface"))
        return static_cast< Widget::Interface*>(const_cast< SDDiskMusicListViewWidget*>(this));
    if (!strcmp(_clname, "Multimedia::Interface"))
        return static_cast< Multimedia::Interface*>(const_cast< SDDiskMusicListViewWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SDDiskMusicListViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
