/****************************************************************************
** Meta object code from reading C++ file 'CalibrateWidget.h'
**
** Created: Mon Oct 23 11:19:14 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Launcher/UserInterface/MainWidget/CalibrateWidget/CalibrateWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalibrateWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CalibrateWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      38,   34,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CalibrateWidget[] = {
    "CalibrateWidget\0\0startCalibrate()\0str\0"
    "finishCalibrate(QString)\0"
};

const QMetaObject CalibrateWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CalibrateWidget,
      qt_meta_data_CalibrateWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CalibrateWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CalibrateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CalibrateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CalibrateWidget))
        return static_cast<void*>(const_cast< CalibrateWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CalibrateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startCalibrate(); break;
        case 1: finishCalibrate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CalibrateWidget::startCalibrate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CalibrateWidget::finishCalibrate(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
