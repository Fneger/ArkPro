/****************************************************************************
** Meta object code from reading C++ file 'ImageShortCutWidget.h'
**
** Created: Tue Oct 24 11:31:55 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Launcher/UserInterface/MainWidget/DiskWidget/ImageWidget/ImageShortCutWidget/ImageShortCutWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageShortCutWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageShortCutWidget[] = {

 // content:
       5,       // revision
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

const QMetaObject ImageShortCutWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ImageShortCutWidget,
      qt_meta_data_ImageShortCutWidget, 0 }
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
        switch (_id) {
        case 0: onImagePlayerFileNames((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: onImagePlayerPlayStatus((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: onBmpButtonRelease(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
