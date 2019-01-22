/********************************************************************************
** Form generated from reading UI file 'wyszukaj_dyscypline.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYSZUKAJ_DYSCYPLINE_H
#define UI_WYSZUKAJ_DYSCYPLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wyszukaj_dyscypline
{
public:
    QGroupBox *groupBox_10;
    QListView *listView_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_22;
    QCommandLinkButton *commandLinkButton_10;
    QCommandLinkButton *commandLinkButton_11;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_19;
    QGroupBox *groupBox_9;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_29;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_21;
    QComboBox *comboBox_5;
    QLineEdit *lineEdit_26;
    QPushButton *pushButton_6;

    void setupUi(QDialog *wyszukaj_dyscypline)
    {
        if (wyszukaj_dyscypline->objectName().isEmpty())
            wyszukaj_dyscypline->setObjectName(QStringLiteral("wyszukaj_dyscypline"));
        wyszukaj_dyscypline->resize(485, 353);
        groupBox_10 = new QGroupBox(wyszukaj_dyscypline);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(20, 170, 441, 161));
        listView_5 = new QListView(groupBox_10);
        listView_5->setObjectName(QStringLiteral("listView_5"));
        listView_5->setGeometry(QRect(10, 30, 421, 121));
        layoutWidget = new QWidget(groupBox_10);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 174, 89));
        verticalLayout_22 = new QVBoxLayout(layoutWidget);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_10 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_10->setObjectName(QStringLiteral("commandLinkButton_10"));

        verticalLayout_22->addWidget(commandLinkButton_10);

        commandLinkButton_11 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_11->setObjectName(QStringLiteral("commandLinkButton_11"));

        verticalLayout_22->addWidget(commandLinkButton_11);

        layoutWidget_11 = new QWidget(wyszukaj_dyscypline);
        layoutWidget_11->setObjectName(QStringLiteral("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(20, 20, 441, 141));
        verticalLayout_19 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        groupBox_9 = new QGroupBox(layoutWidget_11);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        layoutWidget_12 = new QWidget(groupBox_9);
        layoutWidget_12->setObjectName(QStringLiteral("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(10, 30, 421, 71));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        label_29 = new QLabel(layoutWidget_12);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_20->addWidget(label_29);

        label_7 = new QLabel(layoutWidget_12);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_20->addWidget(label_7);


        horizontalLayout_7->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        comboBox_5 = new QComboBox(layoutWidget_12);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        verticalLayout_21->addWidget(comboBox_5);

        lineEdit_26 = new QLineEdit(layoutWidget_12);
        lineEdit_26->setObjectName(QStringLiteral("lineEdit_26"));

        verticalLayout_21->addWidget(lineEdit_26);


        horizontalLayout_7->addLayout(verticalLayout_21);


        verticalLayout_19->addWidget(groupBox_9);

        pushButton_6 = new QPushButton(layoutWidget_11);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_19->addWidget(pushButton_6);


        retranslateUi(wyszukaj_dyscypline);

        QMetaObject::connectSlotsByName(wyszukaj_dyscypline);
    } // setupUi

    void retranslateUi(QDialog *wyszukaj_dyscypline)
    {
        wyszukaj_dyscypline->setWindowTitle(QApplication::translate("wyszukaj_dyscypline", "Dialog", 0));
        groupBox_10->setTitle(QApplication::translate("wyszukaj_dyscypline", "Wyniki", 0));
        commandLinkButton_10->setText(QApplication::translate("wyszukaj_dyscypline", "Dyscyplina 1", 0));
        commandLinkButton_11->setText(QApplication::translate("wyszukaj_dyscypline", "Dyscyplina 2", 0));
        groupBox_9->setTitle(QApplication::translate("wyszukaj_dyscypline", "Wyszukiwanie dyscypliny", 0));
        label_29->setText(QApplication::translate("wyszukaj_dyscypline", "Typ dyscypliny", 0));
        label_7->setText(QApplication::translate("wyszukaj_dyscypline", "Miasto", 0));
        pushButton_6->setText(QApplication::translate("wyszukaj_dyscypline", "Szukaj", 0));
    } // retranslateUi

};

namespace Ui {
    class wyszukaj_dyscypline: public Ui_wyszukaj_dyscypline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYSZUKAJ_DYSCYPLINE_H
