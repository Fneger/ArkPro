/****************************************************************************
** Meta object code from reading C++ file 'ImageShortCutWidget.h'
**
** Created: Mon Oct 23 15:07:53 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Launcher/UserInterface/MainWidget/DiskWidget/ImageWidget/ImageShortCutWidget/ImageShortCutWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageShortCutWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageShortCutWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   21,   20,   20, 0x09,
      64,   57,   20,   20, 0x09,
      93,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ImageShortCutWidget[] = {
    "ImageShortCutWidget\0\0xml\0"
    "onImagePlayerFileNames(QString)\0status\0"
    "onImagePlayerPlayStatus(int)\0"
    "onBmpButtonRelease()\0"
};

void ImageShortCutWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageShortCutWidget *_t = static_cast<ImageShortCutWidget *>(_o);
        switch (_id) {
        case 0: _t->onImagePlayerFileNames((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onImagePlayerPlayStatus((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->onBmpButtonRelease(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImageShortCutWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageShortCutWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ImageShortCutWidget,
      qt_meta_data_ImageShortCutWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageShortCutWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageShortCutWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageShortCutWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageShortCutWidget))
        return static_cast<void*>(const_cast< ImageShortCutWidget*>(this));
    if (!strcmp(_clname, "Multimedia::Interface"))
        return static_cast< Multimedia::Interface*>(const_cast< ImageShortCutWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ImageShortCutWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
