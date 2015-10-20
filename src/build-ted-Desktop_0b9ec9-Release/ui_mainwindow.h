/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 20. Jul 15:25:41 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_All;
    QAction *actionClose;
    QAction *actionClose_All;
    QAction *actionFileQuit;
    QAction *actionBuildRun;
    QAction *actionNew;
    QAction *actionPrefs;
    QAction *actionSave_As;
    QAction *actionStep;
    QAction *actionKill;
    QAction *actionStep_In;
    QAction *actionStep_Out;
    QAction *actionEditFind;
    QAction *actionEditUndo;
    QAction *actionEditRedo;
    QAction *actionEditCut;
    QAction *actionEditCopy;
    QAction *actionEditPaste;
    QAction *actionEditDelete;
    QAction *actionEditSelectAll;
    QAction *actionEditGoto;
    QAction *actionHelpHome;
    QAction *actionHelpBack;
    QAction *actionHelpForward;
    QAction *actionViewFile;
    QAction *actionViewEdit;
    QAction *actionViewBuild;
    QAction *actionViewHelp;
    QAction *actionViewBrowser;
    QAction *actionViewConsole;
    QAction *actionAbout;
    QAction *actionBuildTarget;
    QAction *actionBuildConfig;
    QAction *actionOpenProject;
    QAction *actionDeleteFile;
    QAction *actionRenameFile;
    QAction *actionCloseProject;
    QAction *actionSetActiveProject;
    QAction *actionLock_Build_File;
    QAction *actionUnlock_Build_File;
    QAction *action_empty;
    QAction *actionFileNext;
    QAction *actionFilePrevious;
    QAction *actionEditFindNext;
    QAction *actionBuildBuild;
    QAction *actionEditFindInFiles;
    QAction *actionNewFile;
    QAction *actionNewFolder;
    QAction *actionOpen_on_Desktop;
    QAction *actionOpen_in_Help;
    QAction *actionHelpQuickHelp;
    QAction *actionBuildCheck;
    QAction *actionBuildUpdate;
    QAction *actionClose_Others;
    QAction *actionHelpRebuild;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QToolBar *fileToolBar;
    QStatusBar *statusBar;
    QToolBar *editToolBar;
    QToolBar *buildToolBar;
    QToolBar *helpToolBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuRecent_Files;
    QMenu *menuBuild;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuToolbars;
    QMenu *menuWindows;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(996, 783);
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        MainWindow->setFont(font);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionSave_All = new QAction(MainWindow);
        actionSave_All->setObjectName(QString::fromUtf8("actionSave_All"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionClose_All = new QAction(MainWindow);
        actionClose_All->setObjectName(QString::fromUtf8("actionClose_All"));
        actionFileQuit = new QAction(MainWindow);
        actionFileQuit->setObjectName(QString::fromUtf8("actionFileQuit"));
        actionBuildRun = new QAction(MainWindow);
        actionBuildRun->setObjectName(QString::fromUtf8("actionBuildRun"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Build-Run.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBuildRun->setIcon(icon3);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon4);
        actionPrefs = new QAction(MainWindow);
        actionPrefs->setObjectName(QString::fromUtf8("actionPrefs"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionStep = new QAction(MainWindow);
        actionStep->setObjectName(QString::fromUtf8("actionStep"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Step.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep->setIcon(icon5);
        actionKill = new QAction(MainWindow);
        actionKill->setObjectName(QString::fromUtf8("actionKill"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/Stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKill->setIcon(icon6);
        actionStep_In = new QAction(MainWindow);
        actionStep_In->setObjectName(QString::fromUtf8("actionStep_In"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/Step-In.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep_In->setIcon(icon7);
        actionStep_Out = new QAction(MainWindow);
        actionStep_Out->setObjectName(QString::fromUtf8("actionStep_Out"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/Step-Out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep_Out->setIcon(icon8);
        actionEditFind = new QAction(MainWindow);
        actionEditFind->setObjectName(QString::fromUtf8("actionEditFind"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/Find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditFind->setIcon(icon9);
        actionEditUndo = new QAction(MainWindow);
        actionEditUndo->setObjectName(QString::fromUtf8("actionEditUndo"));
        actionEditRedo = new QAction(MainWindow);
        actionEditRedo->setObjectName(QString::fromUtf8("actionEditRedo"));
        actionEditCut = new QAction(MainWindow);
        actionEditCut->setObjectName(QString::fromUtf8("actionEditCut"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/Cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCut->setIcon(icon10);
        actionEditCopy = new QAction(MainWindow);
        actionEditCopy->setObjectName(QString::fromUtf8("actionEditCopy"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCopy->setIcon(icon11);
        actionEditPaste = new QAction(MainWindow);
        actionEditPaste->setObjectName(QString::fromUtf8("actionEditPaste"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/Paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditPaste->setIcon(icon12);
        actionEditDelete = new QAction(MainWindow);
        actionEditDelete->setObjectName(QString::fromUtf8("actionEditDelete"));
        actionEditSelectAll = new QAction(MainWindow);
        actionEditSelectAll->setObjectName(QString::fromUtf8("actionEditSelectAll"));
        actionEditGoto = new QAction(MainWindow);
        actionEditGoto->setObjectName(QString::fromUtf8("actionEditGoto"));
        actionHelpHome = new QAction(MainWindow);
        actionHelpHome->setObjectName(QString::fromUtf8("actionHelpHome"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/Home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelpHome->setIcon(icon13);
        actionHelpBack = new QAction(MainWindow);
        actionHelpBack->setObjectName(QString::fromUtf8("actionHelpBack"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/Back.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelpBack->setIcon(icon14);
        actionHelpForward = new QAction(MainWindow);
        actionHelpForward->setObjectName(QString::fromUtf8("actionHelpForward"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/Forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelpForward->setIcon(icon15);
        actionViewFile = new QAction(MainWindow);
        actionViewFile->setObjectName(QString::fromUtf8("actionViewFile"));
        actionViewFile->setCheckable(true);
        actionViewEdit = new QAction(MainWindow);
        actionViewEdit->setObjectName(QString::fromUtf8("actionViewEdit"));
        actionViewEdit->setCheckable(true);
        actionViewBuild = new QAction(MainWindow);
        actionViewBuild->setObjectName(QString::fromUtf8("actionViewBuild"));
        actionViewBuild->setCheckable(true);
        actionViewHelp = new QAction(MainWindow);
        actionViewHelp->setObjectName(QString::fromUtf8("actionViewHelp"));
        actionViewHelp->setCheckable(true);
        actionViewBrowser = new QAction(MainWindow);
        actionViewBrowser->setObjectName(QString::fromUtf8("actionViewBrowser"));
        actionViewBrowser->setCheckable(true);
        actionViewConsole = new QAction(MainWindow);
        actionViewConsole->setObjectName(QString::fromUtf8("actionViewConsole"));
        actionViewConsole->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionBuildTarget = new QAction(MainWindow);
        actionBuildTarget->setObjectName(QString::fromUtf8("actionBuildTarget"));
        actionBuildConfig = new QAction(MainWindow);
        actionBuildConfig->setObjectName(QString::fromUtf8("actionBuildConfig"));
        actionOpenProject = new QAction(MainWindow);
        actionOpenProject->setObjectName(QString::fromUtf8("actionOpenProject"));
        actionDeleteFile = new QAction(MainWindow);
        actionDeleteFile->setObjectName(QString::fromUtf8("actionDeleteFile"));
        actionRenameFile = new QAction(MainWindow);
        actionRenameFile->setObjectName(QString::fromUtf8("actionRenameFile"));
        actionCloseProject = new QAction(MainWindow);
        actionCloseProject->setObjectName(QString::fromUtf8("actionCloseProject"));
        actionSetActiveProject = new QAction(MainWindow);
        actionSetActiveProject->setObjectName(QString::fromUtf8("actionSetActiveProject"));
        actionLock_Build_File = new QAction(MainWindow);
        actionLock_Build_File->setObjectName(QString::fromUtf8("actionLock_Build_File"));
        actionUnlock_Build_File = new QAction(MainWindow);
        actionUnlock_Build_File->setObjectName(QString::fromUtf8("actionUnlock_Build_File"));
        action_empty = new QAction(MainWindow);
        action_empty->setObjectName(QString::fromUtf8("action_empty"));
        actionFileNext = new QAction(MainWindow);
        actionFileNext->setObjectName(QString::fromUtf8("actionFileNext"));
        actionFilePrevious = new QAction(MainWindow);
        actionFilePrevious->setObjectName(QString::fromUtf8("actionFilePrevious"));
        actionEditFindNext = new QAction(MainWindow);
        actionEditFindNext->setObjectName(QString::fromUtf8("actionEditFindNext"));
        actionBuildBuild = new QAction(MainWindow);
        actionBuildBuild->setObjectName(QString::fromUtf8("actionBuildBuild"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/Build.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBuildBuild->setIcon(icon16);
        actionEditFindInFiles = new QAction(MainWindow);
        actionEditFindInFiles->setObjectName(QString::fromUtf8("actionEditFindInFiles"));
        actionNewFile = new QAction(MainWindow);
        actionNewFile->setObjectName(QString::fromUtf8("actionNewFile"));
        actionNewFolder = new QAction(MainWindow);
        actionNewFolder->setObjectName(QString::fromUtf8("actionNewFolder"));
        actionOpen_on_Desktop = new QAction(MainWindow);
        actionOpen_on_Desktop->setObjectName(QString::fromUtf8("actionOpen_on_Desktop"));
        actionOpen_in_Help = new QAction(MainWindow);
        actionOpen_in_Help->setObjectName(QString::fromUtf8("actionOpen_in_Help"));
        actionHelpQuickHelp = new QAction(MainWindow);
        actionHelpQuickHelp->setObjectName(QString::fromUtf8("actionHelpQuickHelp"));
        actionBuildCheck = new QAction(MainWindow);
        actionBuildCheck->setObjectName(QString::fromUtf8("actionBuildCheck"));
        actionBuildUpdate = new QAction(MainWindow);
        actionBuildUpdate->setObjectName(QString::fromUtf8("actionBuildUpdate"));
        actionClose_Others = new QAction(MainWindow);
        actionClose_Others->setObjectName(QString::fromUtf8("actionClose_Others"));
        actionHelpRebuild = new QAction(MainWindow);
        actionHelpRebuild->setObjectName(QString::fromUtf8("actionHelpRebuild"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        MainWindow->setCentralWidget(centralWidget);
        fileToolBar = new QToolBar(MainWindow);
        fileToolBar->setObjectName(QString::fromUtf8("fileToolBar"));
        fileToolBar->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::TopToolBarArea, fileToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        editToolBar = new QToolBar(MainWindow);
        editToolBar->setObjectName(QString::fromUtf8("editToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, editToolBar);
        buildToolBar = new QToolBar(MainWindow);
        buildToolBar->setObjectName(QString::fromUtf8("buildToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, buildToolBar);
        helpToolBar = new QToolBar(MainWindow);
        helpToolBar->setObjectName(QString::fromUtf8("helpToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, helpToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 996, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuRecent_Files = new QMenu(menuFile);
        menuRecent_Files->setObjectName(QString::fromUtf8("menuRecent_Files"));
        menuBuild = new QMenu(menuBar);
        menuBuild->setObjectName(QString::fromUtf8("menuBuild"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuToolbars = new QMenu(menuView);
        menuToolbars->setObjectName(QString::fromUtf8("menuToolbars"));
        menuWindows = new QMenu(menuView);
        menuWindows->setObjectName(QString::fromUtf8("menuWindows"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        fileToolBar->addAction(actionNew);
        fileToolBar->addAction(actionOpen);
        fileToolBar->addAction(actionClose);
        fileToolBar->addAction(actionSave);
        editToolBar->addAction(actionEditCut);
        editToolBar->addAction(actionEditCopy);
        editToolBar->addAction(actionEditPaste);
        editToolBar->addAction(actionEditFind);
        buildToolBar->addAction(actionBuildBuild);
        buildToolBar->addAction(actionBuildRun);
        buildToolBar->addAction(actionStep);
        buildToolBar->addAction(actionStep_In);
        buildToolBar->addAction(actionStep_Out);
        buildToolBar->addAction(actionKill);
        helpToolBar->addAction(actionHelpHome);
        helpToolBar->addAction(actionHelpBack);
        helpToolBar->addAction(actionHelpForward);
        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuBuild->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(menuRecent_Files->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addAction(actionClose_All);
        menuFile->addAction(actionClose_Others);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionSave_All);
        menuFile->addSeparator();
        menuFile->addAction(actionFileNext);
        menuFile->addAction(actionFilePrevious);
        menuFile->addSeparator();
        menuFile->addAction(actionPrefs);
        menuFile->addSeparator();
        menuFile->addAction(actionFileQuit);
        menuBuild->addAction(actionBuildBuild);
        menuBuild->addAction(actionBuildRun);
        menuBuild->addAction(actionBuildCheck);
        menuBuild->addAction(actionBuildUpdate);
        menuBuild->addSeparator();
        menuBuild->addAction(actionStep);
        menuBuild->addAction(actionStep_In);
        menuBuild->addAction(actionStep_Out);
        menuBuild->addAction(actionKill);
        menuBuild->addSeparator();
        menuBuild->addAction(actionBuildTarget);
        menuBuild->addAction(actionBuildConfig);
        menuBuild->addSeparator();
        menuBuild->addAction(actionLock_Build_File);
        menuBuild->addAction(actionUnlock_Build_File);
        menuBuild->addSeparator();
        menuBuild->addAction(actionOpenProject);
        menuEdit->addAction(actionEditUndo);
        menuEdit->addAction(actionEditRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditCut);
        menuEdit->addAction(actionEditCopy);
        menuEdit->addAction(actionEditPaste);
        menuEdit->addAction(actionEditDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditSelectAll);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditFind);
        menuEdit->addAction(actionEditFindNext);
        menuEdit->addAction(actionEditGoto);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditFindInFiles);
        menuView->addAction(menuToolbars->menuAction());
        menuView->addAction(menuWindows->menuAction());
        menuToolbars->addAction(actionViewFile);
        menuToolbars->addAction(actionViewEdit);
        menuToolbars->addAction(actionViewBuild);
        menuToolbars->addAction(actionViewHelp);
        menuWindows->addAction(actionViewBrowser);
        menuWindows->addAction(actionViewConsole);
        menuHelp->addAction(actionHelpHome);
        menuHelp->addAction(actionHelpBack);
        menuHelp->addAction(actionHelpForward);
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelpQuickHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelpRebuild);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(actionOpen, SIGNAL(triggered()), MainWindow, SLOT(onFileOpen()));
        QObject::connect(actionBuildRun, SIGNAL(triggered()), MainWindow, SLOT(onBuildRun()));
        QObject::connect(actionNew, SIGNAL(triggered()), MainWindow, SLOT(onFileNew()));
        QObject::connect(actionPrefs, SIGNAL(triggered()), MainWindow, SLOT(onFilePrefs()));
        QObject::connect(actionSave, SIGNAL(triggered()), MainWindow, SLOT(onFileSave()));
        QObject::connect(actionSave_As, SIGNAL(triggered()), MainWindow, SLOT(onFileSaveAs()));
        QObject::connect(actionSave_All, SIGNAL(triggered()), MainWindow, SLOT(onFileSaveAll()));
        QObject::connect(actionClose, SIGNAL(triggered()), MainWindow, SLOT(onFileClose()));
        QObject::connect(actionClose_All, SIGNAL(triggered()), MainWindow, SLOT(onFileCloseAll()));
        QObject::connect(actionClose_Others, SIGNAL(triggered()), MainWindow, SLOT(onFileCloseOthers()));
        QObject::connect(actionStep, SIGNAL(triggered()), MainWindow, SLOT(onDebugStep()));
        QObject::connect(actionKill, SIGNAL(triggered()), MainWindow, SLOT(onDebugKill()));
        QObject::connect(actionStep_In, SIGNAL(triggered()), MainWindow, SLOT(onDebugStepInto()));
        QObject::connect(actionStep_Out, SIGNAL(triggered()), MainWindow, SLOT(onDebugStepOut()));
        QObject::connect(actionEditFind, SIGNAL(triggered()), MainWindow, SLOT(onEditFind()));
        QObject::connect(actionEditGoto, SIGNAL(triggered()), MainWindow, SLOT(onEditGoto()));
        QObject::connect(actionViewBrowser, SIGNAL(triggered()), MainWindow, SLOT(onViewWindow()));
        QObject::connect(actionViewConsole, SIGNAL(triggered()), MainWindow, SLOT(onViewWindow()));
        QObject::connect(actionViewFile, SIGNAL(triggered()), MainWindow, SLOT(onViewToolBar()));
        QObject::connect(actionViewEdit, SIGNAL(triggered()), MainWindow, SLOT(onViewToolBar()));
        QObject::connect(actionViewBuild, SIGNAL(triggered()), MainWindow, SLOT(onViewToolBar()));
        QObject::connect(actionViewHelp, SIGNAL(triggered()), MainWindow, SLOT(onViewToolBar()));
        QObject::connect(actionHelpHome, SIGNAL(triggered()), MainWindow, SLOT(onHelpHome()));
        QObject::connect(actionHelpBack, SIGNAL(triggered()), MainWindow, SLOT(onHelpBack()));
        QObject::connect(actionHelpForward, SIGNAL(triggered()), MainWindow, SLOT(onHelpForward()));
        QObject::connect(actionBuildTarget, SIGNAL(triggered()), MainWindow, SLOT(onBuildTarget()));
        QObject::connect(actionBuildConfig, SIGNAL(triggered()), MainWindow, SLOT(onBuildConfig()));
        QObject::connect(actionOpenProject, SIGNAL(triggered()), MainWindow, SLOT(onBuildAddProject()));
        QObject::connect(actionLock_Build_File, SIGNAL(triggered()), MainWindow, SLOT(onBuildLockFile()));
        QObject::connect(actionUnlock_Build_File, SIGNAL(triggered()), MainWindow, SLOT(onBuildUnlockFile()));
        QObject::connect(actionEditCopy, SIGNAL(triggered()), MainWindow, SLOT(onEditCopy()));
        QObject::connect(actionEditCut, SIGNAL(triggered()), MainWindow, SLOT(onEditCut()));
        QObject::connect(actionEditDelete, SIGNAL(triggered()), MainWindow, SLOT(onEditDelete()));
        QObject::connect(actionEditPaste, SIGNAL(triggered()), MainWindow, SLOT(onEditPaste()));
        QObject::connect(actionEditRedo, SIGNAL(triggered()), MainWindow, SLOT(onEditRedo()));
        QObject::connect(actionEditSelectAll, SIGNAL(triggered()), MainWindow, SLOT(onEditSelectAll()));
        QObject::connect(actionEditUndo, SIGNAL(triggered()), MainWindow, SLOT(onEditUndo()));
        QObject::connect(actionAbout, SIGNAL(triggered()), MainWindow, SLOT(onHelpAbout()));
        QObject::connect(actionFileNext, SIGNAL(triggered()), MainWindow, SLOT(onFileNext()));
        QObject::connect(actionFilePrevious, SIGNAL(triggered()), MainWindow, SLOT(onFilePrevious()));
        QObject::connect(actionEditFindNext, SIGNAL(triggered()), MainWindow, SLOT(onEditFindNext()));
        QObject::connect(actionBuildBuild, SIGNAL(triggered()), MainWindow, SLOT(onBuildBuild()));
        QObject::connect(actionEditFindInFiles, SIGNAL(triggered()), MainWindow, SLOT(onEditFindInFiles()));
        QObject::connect(actionHelpQuickHelp, SIGNAL(triggered()), MainWindow, SLOT(onHelpQuickHelp()));
        QObject::connect(actionBuildCheck, SIGNAL(triggered()), MainWindow, SLOT(onBuildCheck()));
        QObject::connect(actionBuildUpdate, SIGNAL(triggered()), MainWindow, SLOT(onBuildUpdate()));
        QObject::connect(actionHelpRebuild, SIGNAL(triggered()), MainWindow, SLOT(onHelpRebuild()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Big Ted", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open...", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSave_All->setText(QApplication::translate("MainWindow", "Save All", 0, QApplication::UnicodeUTF8));
        actionSave_All->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0, QApplication::UnicodeUTF8));
        actionClose_All->setText(QApplication::translate("MainWindow", "Close All", 0, QApplication::UnicodeUTF8));
        actionFileQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionBuildRun->setText(QApplication::translate("MainWindow", "Build and Run", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBuildRun->setToolTip(QApplication::translate("MainWindow", "Build/Run", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBuildRun->setShortcut(QApplication::translate("MainWindow", "F5", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "New...", 0, QApplication::UnicodeUTF8));
        actionPrefs->setText(QApplication::translate("MainWindow", "Options...", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As...", 0, QApplication::UnicodeUTF8));
        actionStep->setText(QApplication::translate("MainWindow", "Step", 0, QApplication::UnicodeUTF8));
        actionKill->setText(QApplication::translate("MainWindow", "Kill", 0, QApplication::UnicodeUTF8));
        actionKill->setShortcut(QApplication::translate("MainWindow", "Shift+F5", 0, QApplication::UnicodeUTF8));
        actionStep_In->setText(QApplication::translate("MainWindow", "Step In", 0, QApplication::UnicodeUTF8));
        actionStep_Out->setText(QApplication::translate("MainWindow", "Step out", 0, QApplication::UnicodeUTF8));
        actionEditFind->setText(QApplication::translate("MainWindow", "Find...", 0, QApplication::UnicodeUTF8));
        actionEditFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionEditUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionEditUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionEditRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionEditRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
        actionEditCut->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionEditCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionEditCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionEditCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionEditPaste->setText(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionEditPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionEditDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        actionEditSelectAll->setText(QApplication::translate("MainWindow", "Select All", 0, QApplication::UnicodeUTF8));
        actionEditSelectAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionEditGoto->setText(QApplication::translate("MainWindow", "Go to Line...", 0, QApplication::UnicodeUTF8));
        actionEditGoto->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        actionHelpHome->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        actionHelpBack->setText(QApplication::translate("MainWindow", "Back", 0, QApplication::UnicodeUTF8));
        actionHelpForward->setText(QApplication::translate("MainWindow", "Forward", 0, QApplication::UnicodeUTF8));
        actionViewFile->setText(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        actionViewEdit->setText(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        actionViewBuild->setText(QApplication::translate("MainWindow", "Build", 0, QApplication::UnicodeUTF8));
        actionViewHelp->setText(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        actionViewBrowser->setText(QApplication::translate("MainWindow", "Browser", 0, QApplication::UnicodeUTF8));
        actionViewBrowser->setShortcut(QApplication::translate("MainWindow", "Shift+Esc", 0, QApplication::UnicodeUTF8));
        actionViewConsole->setText(QApplication::translate("MainWindow", "Console", 0, QApplication::UnicodeUTF8));
        actionViewConsole->setShortcut(QApplication::translate("MainWindow", "Esc", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About...", 0, QApplication::UnicodeUTF8));
        actionBuildTarget->setText(QApplication::translate("MainWindow", "Build Target...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBuildTarget->setToolTip(QApplication::translate("MainWindow", "Build Target", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBuildConfig->setText(QApplication::translate("MainWindow", "Build Config...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBuildConfig->setToolTip(QApplication::translate("MainWindow", "Build Config", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpenProject->setText(QApplication::translate("MainWindow", "Open project...", 0, QApplication::UnicodeUTF8));
        actionDeleteFile->setText(QApplication::translate("MainWindow", "Delete...", 0, QApplication::UnicodeUTF8));
        actionRenameFile->setText(QApplication::translate("MainWindow", "Rename...", 0, QApplication::UnicodeUTF8));
        actionCloseProject->setText(QApplication::translate("MainWindow", "Close Project", 0, QApplication::UnicodeUTF8));
        actionSetActiveProject->setText(QApplication::translate("MainWindow", "Set as Active Project", 0, QApplication::UnicodeUTF8));
        actionLock_Build_File->setText(QApplication::translate("MainWindow", "Lock Build File", 0, QApplication::UnicodeUTF8));
        actionLock_Build_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionUnlock_Build_File->setText(QApplication::translate("MainWindow", "Unlock Build File", 0, QApplication::UnicodeUTF8));
        actionUnlock_Build_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+L", 0, QApplication::UnicodeUTF8));
        action_empty->setText(QApplication::translate("MainWindow", "<empty>", 0, QApplication::UnicodeUTF8));
        actionFileNext->setText(QApplication::translate("MainWindow", "Next File", 0, QApplication::UnicodeUTF8));
        actionFilePrevious->setText(QApplication::translate("MainWindow", "Previous File", 0, QApplication::UnicodeUTF8));
        actionEditFindNext->setText(QApplication::translate("MainWindow", "Find Next", 0, QApplication::UnicodeUTF8));
        actionEditFindNext->setShortcut(QApplication::translate("MainWindow", "F3", 0, QApplication::UnicodeUTF8));
        actionBuildBuild->setText(QApplication::translate("MainWindow", "Build", 0, QApplication::UnicodeUTF8));
        actionBuildBuild->setShortcut(QApplication::translate("MainWindow", "F7", 0, QApplication::UnicodeUTF8));
        actionEditFindInFiles->setText(QApplication::translate("MainWindow", "Find in files...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEditFindInFiles->setToolTip(QApplication::translate("MainWindow", "Find in files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNewFile->setText(QApplication::translate("MainWindow", "New File...", 0, QApplication::UnicodeUTF8));
        actionNewFolder->setText(QApplication::translate("MainWindow", "New Folder...", 0, QApplication::UnicodeUTF8));
        actionOpen_on_Desktop->setText(QApplication::translate("MainWindow", "Open on Desktop", 0, QApplication::UnicodeUTF8));
        actionOpen_in_Help->setText(QApplication::translate("MainWindow", "Open in Help View", 0, QApplication::UnicodeUTF8));
        actionHelpQuickHelp->setText(QApplication::translate("MainWindow", "Quick Help", 0, QApplication::UnicodeUTF8));
        actionHelpQuickHelp->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        actionBuildCheck->setText(QApplication::translate("MainWindow", "Check Source", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBuildCheck->setToolTip(QApplication::translate("MainWindow", "Check Source", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBuildCheck->setShortcut(QApplication::translate("MainWindow", "F6", 0, QApplication::UnicodeUTF8));
        actionBuildUpdate->setText(QApplication::translate("MainWindow", "Update Target Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBuildUpdate->setToolTip(QApplication::translate("MainWindow", "Update Target Project", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBuildUpdate->setShortcut(QApplication::translate("MainWindow", "F8", 0, QApplication::UnicodeUTF8));
        actionClose_Others->setText(QApplication::translate("MainWindow", "Close Others", 0, QApplication::UnicodeUTF8));
        actionHelpRebuild->setText(QApplication::translate("MainWindow", "Rebuild Help", 0, QApplication::UnicodeUTF8));
        editToolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        buildToolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        helpToolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuRecent_Files->setTitle(QApplication::translate("MainWindow", "Recent Files...", 0, QApplication::UnicodeUTF8));
        menuBuild->setTitle(QApplication::translate("MainWindow", "Build", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuToolbars->setTitle(QApplication::translate("MainWindow", "Toolbars", 0, QApplication::UnicodeUTF8));
        menuWindows->setTitle(QApplication::translate("MainWindow", "Windows", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
