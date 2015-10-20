/********************************************************************************
** Form generated from reading UI file 'findinfilesdialog.ui'
**
** Created: Mon 20. Jul 15:25:41 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDINFILESDIALOG_H
#define UI_FINDINFILESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindInFilesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *findLabel;
    QLineEdit *findLineEdit;
    QLabel *fileTypesLabel;
    QLineEdit *typesLineEdit;
    QLabel *directoryLabel;
    QLabel *caseSensitiveLabel;
    QCheckBox *casedCheckBox;
    QLabel *recursiveLabel;
    QCheckBox *recursiveCheckBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *dirLineEdit;
    QToolButton *dirToolButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListWidget *resultsListWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *findButton;

    void setupUi(QDialog *FindInFilesDialog)
    {
        if (FindInFilesDialog->objectName().isEmpty())
            FindInFilesDialog->setObjectName(QString::fromUtf8("FindInFilesDialog"));
        FindInFilesDialog->resize(752, 474);
        verticalLayout = new QVBoxLayout(FindInFilesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        findLabel = new QLabel(FindInFilesDialog);
        findLabel->setObjectName(QString::fromUtf8("findLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, findLabel);

        findLineEdit = new QLineEdit(FindInFilesDialog);
        findLineEdit->setObjectName(QString::fromUtf8("findLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, findLineEdit);

        fileTypesLabel = new QLabel(FindInFilesDialog);
        fileTypesLabel->setObjectName(QString::fromUtf8("fileTypesLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, fileTypesLabel);

        typesLineEdit = new QLineEdit(FindInFilesDialog);
        typesLineEdit->setObjectName(QString::fromUtf8("typesLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, typesLineEdit);

        directoryLabel = new QLabel(FindInFilesDialog);
        directoryLabel->setObjectName(QString::fromUtf8("directoryLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, directoryLabel);

        caseSensitiveLabel = new QLabel(FindInFilesDialog);
        caseSensitiveLabel->setObjectName(QString::fromUtf8("caseSensitiveLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, caseSensitiveLabel);

        casedCheckBox = new QCheckBox(FindInFilesDialog);
        casedCheckBox->setObjectName(QString::fromUtf8("casedCheckBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, casedCheckBox);

        recursiveLabel = new QLabel(FindInFilesDialog);
        recursiveLabel->setObjectName(QString::fromUtf8("recursiveLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, recursiveLabel);

        recursiveCheckBox = new QCheckBox(FindInFilesDialog);
        recursiveCheckBox->setObjectName(QString::fromUtf8("recursiveCheckBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, recursiveCheckBox);

        widget = new QWidget(FindInFilesDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dirLineEdit = new QLineEdit(widget);
        dirLineEdit->setObjectName(QString::fromUtf8("dirLineEdit"));
        dirLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(dirLineEdit);

        dirToolButton = new QToolButton(widget);
        dirToolButton->setObjectName(QString::fromUtf8("dirToolButton"));

        horizontalLayout_2->addWidget(dirToolButton);


        formLayout->setWidget(2, QFormLayout::FieldRole, widget);


        verticalLayout->addLayout(formLayout);

        groupBox = new QGroupBox(FindInFilesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        resultsListWidget = new QListWidget(groupBox);
        resultsListWidget->setObjectName(QString::fromUtf8("resultsListWidget"));

        gridLayout->addWidget(resultsListWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(FindInFilesDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setEnabled(false);

        horizontalLayout->addWidget(cancelButton);

        findButton = new QPushButton(FindInFilesDialog);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setDefault(true);

        horizontalLayout->addWidget(findButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FindInFilesDialog);
        QObject::connect(findButton, SIGNAL(clicked()), FindInFilesDialog, SLOT(find()));
        QObject::connect(dirToolButton, SIGNAL(clicked()), FindInFilesDialog, SLOT(browseForDir()));
        QObject::connect(resultsListWidget, SIGNAL(itemClicked(QListWidgetItem*)), FindInFilesDialog, SLOT(showResult(QListWidgetItem*)));
        QObject::connect(cancelButton, SIGNAL(clicked()), FindInFilesDialog, SLOT(cancel()));

        QMetaObject::connectSlotsByName(FindInFilesDialog);
    } // setupUi

    void retranslateUi(QDialog *FindInFilesDialog)
    {
        FindInFilesDialog->setWindowTitle(QApplication::translate("FindInFilesDialog", "Find in Files", 0, QApplication::UnicodeUTF8));
        findLabel->setText(QApplication::translate("FindInFilesDialog", "Find", 0, QApplication::UnicodeUTF8));
        fileTypesLabel->setText(QApplication::translate("FindInFilesDialog", "File types", 0, QApplication::UnicodeUTF8));
        directoryLabel->setText(QApplication::translate("FindInFilesDialog", "Directory", 0, QApplication::UnicodeUTF8));
        caseSensitiveLabel->setText(QApplication::translate("FindInFilesDialog", "Case sensitive", 0, QApplication::UnicodeUTF8));
        casedCheckBox->setText(QString());
        recursiveLabel->setText(QApplication::translate("FindInFilesDialog", "Recursive", 0, QApplication::UnicodeUTF8));
        dirToolButton->setText(QApplication::translate("FindInFilesDialog", "...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FindInFilesDialog", "Find results", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("FindInFilesDialog", "Stop", 0, QApplication::UnicodeUTF8));
        findButton->setText(QApplication::translate("FindInFilesDialog", "Find All", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FindInFilesDialog: public Ui_FindInFilesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDINFILESDIALOG_H
