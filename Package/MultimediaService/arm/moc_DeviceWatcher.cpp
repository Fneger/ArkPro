/****************************************************************************
** Meta object code from reading C++ file 'DeviceWatcher.h'
**
** Created: Tue Oct 24 11:30:51 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MultimediaService/DeviceWatcher/DeviceWatcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceWatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceWatcher[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   15,   14,   14, 0x05,
      68,   58,   14,   14, 0x05,
      97,   58,   14,   14, 0x05,
     126,   58,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     169,  155,   14,   14, 0x08,
     234,  223,   14,   14, 0x08,
     261,  223,   14,   14, 0x08,
     287,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DeviceWatcher[] = {
    "DeviceWatcher\0\0type,status\0"
    "onDeviceWatcherStatus(int,int)\0path,type\0"
    "onMusicFilePath(QString,int)\0"
    "onImageFilePath(QString,int)\0"
    "onVideoFilePath(QString,int)\0device,action\0"
    "onDiskDeviceChange(QString,DiskDeviceWatcher::Action)\0"
    "path,index\0onUSBFilePath(QString,int)\0"
    "onSDFilePath(QString,int)\0onFinish()\0"
};

const QMetaObject DeviceWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DeviceWatcher,
      qt_meta_data_DeviceWatcher, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceWatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceWatcher))
        return static_cast<void*>(const_cast< DeviceWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int DeviceWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onDeviceWatcherStatus((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: onMusicFilePath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: onImageFilePath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: onVideoFilePath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 4: onDiskDeviceChange((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const DiskDeviceWatcher::Action(*)>(_a[2]))); break;
        case 5: onUSBFilePath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 6: onSDFilePath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: onFinish(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DeviceWatcher::onDeviceWatcherStatus(const int _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceWatcher::onMusicFilePath(const QString & _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceWatcher::onImageFilePath(const QString & _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceWatcher::onVideoFilePath(const QString & _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
