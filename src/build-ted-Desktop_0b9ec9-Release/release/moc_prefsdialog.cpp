/****************************************************************************
** Meta object code from reading C++ file 'prefsdialog.h'
**
** Created: Mon 20. Jul 15:25:45 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ted/prefsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrefsDialog[] = {

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
      18,   13,   12,   12, 0x0a,
      44,   39,   12,   12, 0x0a,
      67,   39,   12,   12, 0x0a,
      95,   89,   12,   12, 0x0a,
     122,   12,   12,   12, 0x0a,
     139,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PrefsDialog[] = {
    "PrefsDialog\0\0font\0onFontChanged(QFont)\0"
    "size\0onFontSizeChanged(int)\0"
    "onTabSizeChanged(int)\0state\0"
    "onSmoothFontsChanged(bool)\0onColorChanged()\0"
    "onBrowseForPath()\0"
};

void PrefsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrefsDialog *_t = static_cast<PrefsDialog *>(_o);
        switch (_id) {
        case 0: _t->onFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->onFontSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onTabSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onSmoothFontsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onColorChanged(); break;
        case 5: _t->onBrowseForPath(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrefsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrefsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PrefsDialog,
      qt_meta_data_PrefsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrefsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrefsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrefsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrefsDialog))
        return static_cast<void*>(const_cast< PrefsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PrefsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
