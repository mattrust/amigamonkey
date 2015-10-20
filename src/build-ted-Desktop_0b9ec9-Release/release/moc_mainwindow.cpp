/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon 20. Jul 15:25:44 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ted/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelpView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_HelpView[] = {
    "HelpView\0"
};

void HelpView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData HelpView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HelpView::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_HelpView,
      qt_meta_data_HelpView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelpView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelpView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelpView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelpView))
        return static_cast<void*>(const_cast< HelpView*>(this));
    return QWebView::qt_metacast(_clname);
}

int HelpView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      24,   11,   11,   11, 0x0a,
      37,   11,   11,   11, 0x0a,
      56,   11,   11,   11, 0x0a,
      70,   11,   11,   11, 0x0a,
      87,   11,   11,   11, 0x0a,
     107,   11,   11,   11, 0x0a,
     120,   11,   11,   11, 0x0a,
     135,   11,   11,   11, 0x0a,
     151,   11,   11,   11, 0x0a,
     164,   11,   11,   11, 0x0a,
     181,   11,   11,   11, 0x0a,
     195,   11,   11,   11, 0x0a,
     208,   11,   11,   11, 0x0a,
     221,   11,   11,   11, 0x0a,
     234,   11,   11,   11, 0x0a,
     246,   11,   11,   11, 0x0a,
     259,   11,   11,   11, 0x0a,
     273,   11,   11,   11, 0x0a,
     288,   11,   11,   11, 0x0a,
     306,   11,   11,   11, 0x0a,
     319,   11,   11,   11, 0x0a,
     340,  336,   11,   11, 0x0a,
     359,   11,   11,   11, 0x0a,
     372,   11,   11,   11, 0x0a,
     392,   11,   11,   11, 0x0a,
     408,   11,   11,   11, 0x0a,
     423,   11,   11,   11, 0x0a,
     438,   11,   11,   11, 0x0a,
     451,   11,   11,   11, 0x0a,
     466,   11,   11,   11, 0x0a,
     482,   11,   11,   11, 0x0a,
     496,   11,   11,   11, 0x0a,
     514,   11,   11,   11, 0x0a,
     531,   11,   11,   11, 0x0a,
     545,   11,   11,   11, 0x0a,
     561,   11,   11,   11, 0x0a,
     577,   11,   11,   11, 0x0a,
     595,   11,   11,   11, 0x0a,
     615,   11,   11,   11, 0x0a,
     635,   11,   11,   11, 0x0a,
     648,   11,   11,   11, 0x0a,
     661,   11,   11,   11, 0x0a,
     677,   11,   11,   11, 0x0a,
     695,   11,   11,   11, 0x0a,
     709,   11,   11,   11, 0x0a,
     731,  725,   11,   11, 0x08,
     757,  752,   11,   11, 0x08,
     781,  777,   11,   11, 0x08,
     801,  725,   11,   11, 0x08,
     821,  725,   11,   11, 0x08,
     851,  843,   11,   11, 0x08,
     885,  881,   11,   11, 0x08,
     907,  725,   11,   11, 0x08,
     934,   11,   11,   11, 0x08,
     950,   11,   11,   11, 0x08,
     986,  976,   11,   11, 0x08,
    1023, 1010,   11,   11, 0x08,
    1051,   11,   11,   11, 0x08,
    1066,   11,   11,   11, 0x08,
    1089, 1081,   11,   11, 0x08,
    1114,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0onFileNew()\0onFileOpen()\0"
    "onFileOpenRecent()\0onFileClose()\0"
    "onFileCloseAll()\0onFileCloseOthers()\0"
    "onFileSave()\0onFileSaveAs()\0onFileSaveAll()\0"
    "onFileNext()\0onFilePrevious()\0"
    "onFilePrefs()\0onFileQuit()\0onEditUndo()\0"
    "onEditRedo()\0onEditCut()\0onEditCopy()\0"
    "onEditPaste()\0onEditDelete()\0"
    "onEditSelectAll()\0onEditFind()\0"
    "onEditFindNext()\0how\0onFindReplace(int)\0"
    "onEditGoto()\0onEditFindInFiles()\0"
    "onViewToolBar()\0onViewWindow()\0"
    "onBuildBuild()\0onBuildRun()\0onBuildCheck()\0"
    "onBuildUpdate()\0onDebugStep()\0"
    "onDebugStepInto()\0onDebugStepOut()\0"
    "onDebugKill()\0onBuildTarget()\0"
    "onBuildConfig()\0onBuildLockFile()\0"
    "onBuildUnlockFile()\0onBuildAddProject()\0"
    "onHelpHome()\0onHelpBack()\0onHelpForward()\0"
    "onHelpQuickHelp()\0onHelpAbout()\0"
    "onHelpRebuild()\0index\0onTargetChanged(int)\0"
    "text\0onShowHelp(QString)\0url\0"
    "onLinkClicked(QUrl)\0onCloseMainTab(int)\0"
    "onMainTabChanged(int)\0visible\0"
    "onDockVisibilityChanged(bool)\0pos\0"
    "onProjectMenu(QPoint)\0onFileClicked(QModelIndex)\0"
    "onTextChanged()\0onCursorPositionChanged()\0"
    "path,line\0onShowCode(QString,int)\0"
    "path,pos,len\0onShowCode(QString,int,int)\0"
    "onProcStdout()\0onProcStderr()\0channel\0"
    "onProcLineAvailable(int)\0onProcFinished()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->onFileNew(); break;
        case 1: _t->onFileOpen(); break;
        case 2: _t->onFileOpenRecent(); break;
        case 3: _t->onFileClose(); break;
        case 4: _t->onFileCloseAll(); break;
        case 5: _t->onFileCloseOthers(); break;
        case 6: _t->onFileSave(); break;
        case 7: _t->onFileSaveAs(); break;
        case 8: _t->onFileSaveAll(); break;
        case 9: _t->onFileNext(); break;
        case 10: _t->onFilePrevious(); break;
        case 11: _t->onFilePrefs(); break;
        case 12: _t->onFileQuit(); break;
        case 13: _t->onEditUndo(); break;
        case 14: _t->onEditRedo(); break;
        case 15: _t->onEditCut(); break;
        case 16: _t->onEditCopy(); break;
        case 17: _t->onEditPaste(); break;
        case 18: _t->onEditDelete(); break;
        case 19: _t->onEditSelectAll(); break;
        case 20: _t->onEditFind(); break;
        case 21: _t->onEditFindNext(); break;
        case 22: _t->onFindReplace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->onEditGoto(); break;
        case 24: _t->onEditFindInFiles(); break;
        case 25: _t->onViewToolBar(); break;
        case 26: _t->onViewWindow(); break;
        case 27: _t->onBuildBuild(); break;
        case 28: _t->onBuildRun(); break;
        case 29: _t->onBuildCheck(); break;
        case 30: _t->onBuildUpdate(); break;
        case 31: _t->onDebugStep(); break;
        case 32: _t->onDebugStepInto(); break;
        case 33: _t->onDebugStepOut(); break;
        case 34: _t->onDebugKill(); break;
        case 35: _t->onBuildTarget(); break;
        case 36: _t->onBuildConfig(); break;
        case 37: _t->onBuildLockFile(); break;
        case 38: _t->onBuildUnlockFile(); break;
        case 39: _t->onBuildAddProject(); break;
        case 40: _t->onHelpHome(); break;
        case 41: _t->onHelpBack(); break;
        case 42: _t->onHelpForward(); break;
        case 43: _t->onHelpQuickHelp(); break;
        case 44: _t->onHelpAbout(); break;
        case 45: _t->onHelpRebuild(); break;
        case 46: _t->onTargetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->onShowHelp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: _t->onLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 49: _t->onCloseMainTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->onMainTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->onDockVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->onProjectMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 53: _t->onFileClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 54: _t->onTextChanged(); break;
        case 55: _t->onCursorPositionChanged(); break;
        case 56: _t->onShowCode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 57: _t->onShowCode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 58: _t->onProcStdout(); break;
        case 59: _t->onProcStderr(); break;
        case 60: _t->onProcLineAvailable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->onProcFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
