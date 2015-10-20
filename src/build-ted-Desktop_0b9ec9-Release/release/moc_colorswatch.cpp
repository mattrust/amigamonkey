/****************************************************************************
** Meta object code from reading C++ file 'colorswatch.h'
**
** Created: Mon 20. Jul 15:25:45 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ted/colorswatch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorswatch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ColorSwatch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   28,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ColorSwatch[] = {
    "ColorSwatch\0\0colorChanged()\0color\0"
    "setColor(QColor)\0"
};

void ColorSwatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorSwatch *_t = static_cast<ColorSwatch *>(_o);
        switch (_id) {
        case 0: _t->colorChanged(); break;
        case 1: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorSwatch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorSwatch::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ColorSwatch,
      qt_meta_data_ColorSwatch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorSwatch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorSwatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorSwatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorSwatch))
        return static_cast<void*>(const_cast< ColorSwatch*>(this));
    return QLabel::qt_metacast(_clname);
}

int ColorSwatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ColorSwatch::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
