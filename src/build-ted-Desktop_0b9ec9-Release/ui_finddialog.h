/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created: Mon 20. Jul 15:25:41 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FindDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *findText;
    QLabel *label_2;
    QLineEdit *replaceText;
    QLabel *caseSensitiveLabel;
    QCheckBox *caseSensitive;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *replaceAll;
    QPushButton *replace;
    QPushButton *findNext;

    void setupUi(QDialog *FindDialog)
    {
        if (FindDialog->objectName().isEmpty())
            FindDialog->setObjectName(QString::fromUtf8("FindDialog"));
        FindDialog->resize(761, 148);
        verticalLayout = new QVBoxLayout(FindDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(FindDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        findText = new QLineEdit(FindDialog);
        findText->setObjectName(QString::fromUtf8("findText"));

        formLayout->setWidget(0, QFormLayout::FieldRole, findText);

        label_2 = new QLabel(FindDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        replaceText = new QLineEdit(FindDialog);
        replaceText->setObjectName(QString::fromUtf8("replaceText"));

        formLayout->setWidget(1, QFormLayout::FieldRole, replaceText);

        caseSensitiveLabel = new QLabel(FindDialog);
        caseSensitiveLabel->setObjectName(QString::fromUtf8("caseSensitiveLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, caseSensitiveLabel);

        caseSensitive = new QCheckBox(FindDialog);
        caseSensitive->setObjectName(QString::fromUtf8("caseSensitive"));

        formLayout->setWidget(2, QFormLayout::FieldRole, caseSensitive);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        replaceAll = new QPushButton(FindDialog);
        replaceAll->setObjectName(QString::fromUtf8("replaceAll"));
        replaceAll->setAutoDefault(false);

        horizontalLayout->addWidget(replaceAll);

        replace = new QPushButton(FindDialog);
        replace->setObjectName(QString::fromUtf8("replace"));
        replace->setAutoDefault(false);

        horizontalLayout->addWidget(replace);

        findNext = new QPushButton(FindDialog);
        findNext->setObjectName(QString::fromUtf8("findNext"));
        findNext->setDefault(true);

        horizontalLayout->addWidget(findNext);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(findText, replaceText);
        QWidget::setTabOrder(replaceText, caseSensitive);

        retranslateUi(FindDialog);
        QObject::connect(findNext, SIGNAL(clicked()), FindDialog, SLOT(onFindNext()));
        QObject::connect(replace, SIGNAL(clicked()), FindDialog, SLOT(onReplace()));
        QObject::connect(replaceAll, SIGNAL(clicked()), FindDialog, SLOT(onReplaceAll()));

        QMetaObject::connectSlotsByName(FindDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDialog)
    {
        FindDialog->setWindowTitle(QApplication::translate("FindDialog", "Find/Replace", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FindDialog", "Find", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FindDialog", "Replace", 0, QApplication::UnicodeUTF8));
        caseSensitiveLabel->setText(QApplication::translate("FindDialog", "Case sensitive", 0, QApplication::UnicodeUTF8));
        replaceAll->setText(QApplication::translate("FindDialog", "Replace All", 0, QApplication::UnicodeUTF8));
        replace->setText(QApplication::translate("FindDialog", "Replace", 0, QApplication::UnicodeUTF8));
        findNext->setText(QApplication::translate("FindDialog", "Find Next", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FindDialog: public Ui_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
