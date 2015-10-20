/********************************************************************************
** Form generated from reading UI file 'prefsdialog.ui'
**
** Created: Mon 20. Jul 15:25:41 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFSDIALOG_H
#define UI_PREFSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFontComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "colorswatch.h"

QT_BEGIN_NAMESPACE

class Ui_PrefsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout_3;
    QLabel *familyLabel;
    QFontComboBox *fontComboBox;
    QLabel *pointSizeLabel;
    QSpinBox *fontSizeWidget;
    QLabel *tabSizeLabel_2;
    QSpinBox *tabSizeWidget;
    QLabel *smoothFontsLabel;
    QCheckBox *smoothFontsWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *backgroundColorLabel;
    ColorSwatch *backgroundColorWidget;
    QLabel *defaultColorLabel;
    ColorSwatch *defaultColorWidget;
    QLabel *highlightColorLabel;
    ColorSwatch *highlightColorWidget;
    QLabel *numbersColorLabel;
    ColorSwatch *numbersColorWidget;
    QLabel *stringsColorLabel;
    ColorSwatch *stringsColorWidget;
    ColorSwatch *identifiersColorWidget;
    QLabel *keywordsColorLabel;
    ColorSwatch *keywordsColorWidget;
    QLabel *commentsColorLabel;
    ColorSwatch *commentsColorWidget;
    QLabel *identifiersColorLabel;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout_4;
    QLabel *monkeyLabel;
    QLabel *blitzMaxLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *monkeyPathWidget;
    QToolButton *monkeyPathButton;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *blitzmaxPathWidget;
    QToolButton *blitzmaxPathButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *okayButton;

    void setupUi(QDialog *PrefsDialog)
    {
        if (PrefsDialog->objectName().isEmpty())
            PrefsDialog->setObjectName(QString::fromUtf8("PrefsDialog"));
        PrefsDialog->resize(394, 455);
        verticalLayout = new QVBoxLayout(PrefsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(PrefsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        familyLabel = new QLabel(groupBox_2);
        familyLabel->setObjectName(QString::fromUtf8("familyLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, familyLabel);

        fontComboBox = new QFontComboBox(groupBox_2);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, fontComboBox);

        pointSizeLabel = new QLabel(groupBox_2);
        pointSizeLabel->setObjectName(QString::fromUtf8("pointSizeLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, pointSizeLabel);

        fontSizeWidget = new QSpinBox(groupBox_2);
        fontSizeWidget->setObjectName(QString::fromUtf8("fontSizeWidget"));
        fontSizeWidget->setValue(12);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, fontSizeWidget);

        tabSizeLabel_2 = new QLabel(groupBox_2);
        tabSizeLabel_2->setObjectName(QString::fromUtf8("tabSizeLabel_2"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, tabSizeLabel_2);

        tabSizeWidget = new QSpinBox(groupBox_2);
        tabSizeWidget->setObjectName(QString::fromUtf8("tabSizeWidget"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, tabSizeWidget);

        smoothFontsLabel = new QLabel(groupBox_2);
        smoothFontsLabel->setObjectName(QString::fromUtf8("smoothFontsLabel"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, smoothFontsLabel);

        smoothFontsWidget = new QCheckBox(groupBox_2);
        smoothFontsWidget->setObjectName(QString::fromUtf8("smoothFontsWidget"));
        smoothFontsWidget->setLayoutDirection(Qt::LeftToRight);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, smoothFontsWidget);


        gridLayout_2->addLayout(formLayout_3, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(PrefsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, -1, 9, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        backgroundColorLabel = new QLabel(groupBox);
        backgroundColorLabel->setObjectName(QString::fromUtf8("backgroundColorLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, backgroundColorLabel);

        backgroundColorWidget = new ColorSwatch(groupBox);
        backgroundColorWidget->setObjectName(QString::fromUtf8("backgroundColorWidget"));

        formLayout->setWidget(0, QFormLayout::FieldRole, backgroundColorWidget);

        defaultColorLabel = new QLabel(groupBox);
        defaultColorLabel->setObjectName(QString::fromUtf8("defaultColorLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, defaultColorLabel);

        defaultColorWidget = new ColorSwatch(groupBox);
        defaultColorWidget->setObjectName(QString::fromUtf8("defaultColorWidget"));

        formLayout->setWidget(1, QFormLayout::FieldRole, defaultColorWidget);

        highlightColorLabel = new QLabel(groupBox);
        highlightColorLabel->setObjectName(QString::fromUtf8("highlightColorLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, highlightColorLabel);

        highlightColorWidget = new ColorSwatch(groupBox);
        highlightColorWidget->setObjectName(QString::fromUtf8("highlightColorWidget"));

        formLayout->setWidget(2, QFormLayout::FieldRole, highlightColorWidget);

        numbersColorLabel = new QLabel(groupBox);
        numbersColorLabel->setObjectName(QString::fromUtf8("numbersColorLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, numbersColorLabel);

        numbersColorWidget = new ColorSwatch(groupBox);
        numbersColorWidget->setObjectName(QString::fromUtf8("numbersColorWidget"));

        formLayout->setWidget(3, QFormLayout::FieldRole, numbersColorWidget);

        stringsColorLabel = new QLabel(groupBox);
        stringsColorLabel->setObjectName(QString::fromUtf8("stringsColorLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, stringsColorLabel);

        stringsColorWidget = new ColorSwatch(groupBox);
        stringsColorWidget->setObjectName(QString::fromUtf8("stringsColorWidget"));

        formLayout->setWidget(4, QFormLayout::FieldRole, stringsColorWidget);

        identifiersColorWidget = new ColorSwatch(groupBox);
        identifiersColorWidget->setObjectName(QString::fromUtf8("identifiersColorWidget"));

        formLayout->setWidget(5, QFormLayout::FieldRole, identifiersColorWidget);

        keywordsColorLabel = new QLabel(groupBox);
        keywordsColorLabel->setObjectName(QString::fromUtf8("keywordsColorLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, keywordsColorLabel);

        keywordsColorWidget = new ColorSwatch(groupBox);
        keywordsColorWidget->setObjectName(QString::fromUtf8("keywordsColorWidget"));

        formLayout->setWidget(6, QFormLayout::FieldRole, keywordsColorWidget);

        commentsColorLabel = new QLabel(groupBox);
        commentsColorLabel->setObjectName(QString::fromUtf8("commentsColorLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, commentsColorLabel);

        commentsColorWidget = new ColorSwatch(groupBox);
        commentsColorWidget->setObjectName(QString::fromUtf8("commentsColorWidget"));

        formLayout->setWidget(7, QFormLayout::FieldRole, commentsColorWidget);

        identifiersColorLabel = new QLabel(groupBox);
        identifiersColorLabel->setObjectName(QString::fromUtf8("identifiersColorLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, identifiersColorLabel);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_4 = new QGroupBox(PrefsDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        monkeyLabel = new QLabel(groupBox_4);
        monkeyLabel->setObjectName(QString::fromUtf8("monkeyLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, monkeyLabel);

        blitzMaxLabel = new QLabel(groupBox_4);
        blitzMaxLabel->setObjectName(QString::fromUtf8("blitzMaxLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, blitzMaxLabel);

        widget = new QWidget(groupBox_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        monkeyPathWidget = new QLineEdit(widget);
        monkeyPathWidget->setObjectName(QString::fromUtf8("monkeyPathWidget"));
        monkeyPathWidget->setLayoutDirection(Qt::LeftToRight);
        monkeyPathWidget->setReadOnly(true);

        horizontalLayout->addWidget(monkeyPathWidget);

        monkeyPathButton = new QToolButton(widget);
        monkeyPathButton->setObjectName(QString::fromUtf8("monkeyPathButton"));

        horizontalLayout->addWidget(monkeyPathButton);


        formLayout_4->setWidget(0, QFormLayout::FieldRole, widget);

        widget_2 = new QWidget(groupBox_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        blitzmaxPathWidget = new QLineEdit(widget_2);
        blitzmaxPathWidget->setObjectName(QString::fromUtf8("blitzmaxPathWidget"));
        blitzmaxPathWidget->setReadOnly(true);

        horizontalLayout_2->addWidget(blitzmaxPathWidget);

        blitzmaxPathButton = new QToolButton(widget_2);
        blitzmaxPathButton->setObjectName(QString::fromUtf8("blitzmaxPathButton"));

        horizontalLayout_2->addWidget(blitzmaxPathButton);


        formLayout_4->setWidget(1, QFormLayout::FieldRole, widget_2);


        gridLayout_4->addLayout(formLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        okayButton = new QPushButton(PrefsDialog);
        okayButton->setObjectName(QString::fromUtf8("okayButton"));

        horizontalLayout_3->addWidget(okayButton);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(fontComboBox, fontSizeWidget);
        QWidget::setTabOrder(fontSizeWidget, tabSizeWidget);
        QWidget::setTabOrder(tabSizeWidget, smoothFontsWidget);
        QWidget::setTabOrder(smoothFontsWidget, monkeyPathButton);
        QWidget::setTabOrder(monkeyPathButton, blitzmaxPathButton);
        QWidget::setTabOrder(blitzmaxPathButton, monkeyPathWidget);
        QWidget::setTabOrder(monkeyPathWidget, blitzmaxPathWidget);

        retranslateUi(PrefsDialog);
        QObject::connect(stringsColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(keywordsColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(defaultColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(numbersColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(backgroundColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(identifiersColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(commentsColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(fontComboBox, SIGNAL(currentFontChanged(QFont)), PrefsDialog, SLOT(onFontChanged(QFont)));
        QObject::connect(fontSizeWidget, SIGNAL(valueChanged(int)), PrefsDialog, SLOT(onFontSizeChanged(int)));
        QObject::connect(monkeyPathButton, SIGNAL(clicked()), PrefsDialog, SLOT(onBrowseForPath()));
        QObject::connect(blitzmaxPathButton, SIGNAL(clicked()), PrefsDialog, SLOT(onBrowseForPath()));
        QObject::connect(tabSizeWidget, SIGNAL(valueChanged(int)), PrefsDialog, SLOT(onTabSizeChanged(int)));
        QObject::connect(highlightColorWidget, SIGNAL(colorChanged()), PrefsDialog, SLOT(onColorChanged()));
        QObject::connect(smoothFontsWidget, SIGNAL(toggled(bool)), PrefsDialog, SLOT(onSmoothFontsChanged(bool)));
        QObject::connect(okayButton, SIGNAL(clicked()), PrefsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(PrefsDialog);
    } // setupUi

    void retranslateUi(QDialog *PrefsDialog)
    {
        PrefsDialog->setWindowTitle(QApplication::translate("PrefsDialog", "IDE Options", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("PrefsDialog", "Code Editor Options", 0, QApplication::UnicodeUTF8));
        familyLabel->setText(QApplication::translate("PrefsDialog", "Font Family", 0, QApplication::UnicodeUTF8));
        pointSizeLabel->setText(QApplication::translate("PrefsDialog", "Font Size", 0, QApplication::UnicodeUTF8));
        tabSizeLabel_2->setText(QApplication::translate("PrefsDialog", "Tab size", 0, QApplication::UnicodeUTF8));
        smoothFontsLabel->setText(QApplication::translate("PrefsDialog", "Smooth fonts", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PrefsDialog", "Code Editor Colors", 0, QApplication::UnicodeUTF8));
        backgroundColorLabel->setText(QApplication::translate("PrefsDialog", "Background", 0, QApplication::UnicodeUTF8));
        defaultColorLabel->setText(QApplication::translate("PrefsDialog", "Default", 0, QApplication::UnicodeUTF8));
        highlightColorLabel->setText(QApplication::translate("PrefsDialog", "Highlight", 0, QApplication::UnicodeUTF8));
        numbersColorLabel->setText(QApplication::translate("PrefsDialog", "Numbers", 0, QApplication::UnicodeUTF8));
        stringsColorLabel->setText(QApplication::translate("PrefsDialog", "Strings", 0, QApplication::UnicodeUTF8));
        keywordsColorLabel->setText(QApplication::translate("PrefsDialog", "Keywords", 0, QApplication::UnicodeUTF8));
        commentsColorLabel->setText(QApplication::translate("PrefsDialog", "Comments", 0, QApplication::UnicodeUTF8));
        identifiersColorLabel->setText(QApplication::translate("PrefsDialog", "Identifiers", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("PrefsDialog", "Tool Paths", 0, QApplication::UnicodeUTF8));
        monkeyLabel->setText(QApplication::translate("PrefsDialog", "Monkey", 0, QApplication::UnicodeUTF8));
        blitzMaxLabel->setText(QApplication::translate("PrefsDialog", "BlitzMax", 0, QApplication::UnicodeUTF8));
        monkeyPathButton->setText(QApplication::translate("PrefsDialog", "...", 0, QApplication::UnicodeUTF8));
        blitzmaxPathButton->setText(QApplication::translate("PrefsDialog", "...", 0, QApplication::UnicodeUTF8));
        okayButton->setText(QApplication::translate("PrefsDialog", "Okay", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrefsDialog: public Ui_PrefsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFSDIALOG_H
