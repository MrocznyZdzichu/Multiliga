/********************************************************************************
** Form generated from reading UI file 'wyszukaj_lige.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYSZUKAJ_LIGE_H
#define UI_WYSZUKAJ_LIGE_H

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

class Ui_wyszukaj_lige
{
public:
    QGroupBox *groupBox_7;
    QListView *listView_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_24;
    QCommandLinkButton *commandLinkButton_6;
    QCommandLinkButton *commandLinkButton_7;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_19;
    QLabel *label_23;
    QLabel *label_20;
    QLabel *label_22;
    QVBoxLayout *verticalLayout_16;
    QLineEdit *lineEdit_12;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_13;
    QPushButton *pushButton_5;

    void setupUi(QDialog *wyszukaj_lige)
    {
        if (wyszukaj_lige->objectName().isEmpty())
            wyszukaj_lige->setObjectName(QStringLiteral("wyszukaj_lige"));
        wyszukaj_lige->resize(483, 428);
        groupBox_7 = new QGroupBox(wyszukaj_lige);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 270, 441, 141));
        listView_3 = new QListView(groupBox_7);
        listView_3->setObjectName(QStringLiteral("listView_3"));
        listView_3->setGeometry(QRect(10, 30, 421, 101));
        layoutWidget = new QWidget(groupBox_7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 174, 89));
        verticalLayout_24 = new QVBoxLayout(layoutWidget);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_6 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_6->setObjectName(QStringLiteral("commandLinkButton_6"));

        verticalLayout_24->addWidget(commandLinkButton_6);

        commandLinkButton_7 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_7->setObjectName(QStringLiteral("commandLinkButton_7"));

        verticalLayout_24->addWidget(commandLinkButton_7);

        layoutWidget_7 = new QWidget(wyszukaj_lige);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(20, 20, 441, 241));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(layoutWidget_7);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        layoutWidget_8 = new QWidget(groupBox_8);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 30, 421, 171));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_15 = new QLabel(layoutWidget_8);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_15->addWidget(label_15);

        label_17 = new QLabel(layoutWidget_8);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_15->addWidget(label_17);

        label_19 = new QLabel(layoutWidget_8);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_15->addWidget(label_19);

        label_23 = new QLabel(layoutWidget_8);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_15->addWidget(label_23);

        label_20 = new QLabel(layoutWidget_8);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_15->addWidget(label_20);

        label_22 = new QLabel(layoutWidget_8);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_15->addWidget(label_22);


        horizontalLayout_5->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        lineEdit_12 = new QLineEdit(layoutWidget_8);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        verticalLayout_16->addWidget(lineEdit_12);

        comboBox_3 = new QComboBox(layoutWidget_8);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        verticalLayout_16->addWidget(comboBox_3);

        lineEdit_17 = new QLineEdit(layoutWidget_8);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));

        verticalLayout_16->addWidget(lineEdit_17);

        lineEdit_18 = new QLineEdit(layoutWidget_8);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));

        verticalLayout_16->addWidget(lineEdit_18);

        lineEdit_19 = new QLineEdit(layoutWidget_8);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));

        verticalLayout_16->addWidget(lineEdit_19);

        lineEdit_13 = new QLineEdit(layoutWidget_8);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        verticalLayout_16->addWidget(lineEdit_13);


        horizontalLayout_5->addLayout(verticalLayout_16);


        verticalLayout_11->addWidget(groupBox_8);

        pushButton_5 = new QPushButton(layoutWidget_7);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_11->addWidget(pushButton_5);


        retranslateUi(wyszukaj_lige);

        QMetaObject::connectSlotsByName(wyszukaj_lige);
    } // setupUi

    void retranslateUi(QDialog *wyszukaj_lige)
    {
        wyszukaj_lige->setWindowTitle(QApplication::translate("wyszukaj_lige", "Dialog", 0));
        groupBox_7->setTitle(QApplication::translate("wyszukaj_lige", "Wyniki(pojawiaj\304\205 si\304\231 po klikni\304\231ciu szukaj)", 0));
        commandLinkButton_6->setText(QApplication::translate("wyszukaj_lige", "Liga X", 0));
        commandLinkButton_7->setText(QApplication::translate("wyszukaj_lige", "Liga Y", 0));
        groupBox_8->setTitle(QApplication::translate("wyszukaj_lige", "Wyszukiwanie ligi", 0));
        label_15->setText(QApplication::translate("wyszukaj_lige", "Nazwa", 0));
        label_17->setText(QApplication::translate("wyszukaj_lige", "Dyscyplina", 0));
        label_19->setText(QApplication::translate("wyszukaj_lige", "Poziom ligi", 0));
        label_23->setText(QApplication::translate("wyszukaj_lige", "Miasto", 0));
        label_20->setText(QApplication::translate("wyszukaj_lige", "Organizator", 0));
        label_22->setText(QApplication::translate("wyszukaj_lige", "Sezon", 0));
        pushButton_5->setText(QApplication::translate("wyszukaj_lige", "Szukaj", 0));
    } // retranslateUi

};

namespace Ui {
    class wyszukaj_lige: public Ui_wyszukaj_lige {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYSZUKAJ_LIGE_H
