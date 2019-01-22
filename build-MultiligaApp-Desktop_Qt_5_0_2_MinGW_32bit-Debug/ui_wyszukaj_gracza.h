/********************************************************************************
** Form generated from reading UI file 'wyszukaj_gracza.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYSZUKAJ_GRACZA_H
#define UI_WYSZUKAJ_GRACZA_H

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

class Ui_wyszukaj_gracza
{
public:
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QListView *listView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_23;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;

    void setupUi(QDialog *wyszukaj_gracza)
    {
        if (wyszukaj_gracza->objectName().isEmpty())
            wyszukaj_gracza->setObjectName(QStringLiteral("wyszukaj_gracza"));
        wyszukaj_gracza->resize(483, 417);
        layoutWidget_3 = new QWidget(wyszukaj_gracza);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 20, 441, 201));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        layoutWidget_4 = new QWidget(groupBox_2);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 30, 421, 131));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(layoutWidget_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_5->addWidget(label_6);

        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_5->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        lineEdit_4 = new QLineEdit(layoutWidget_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_7->addWidget(lineEdit_4);

        comboBox = new QComboBox(layoutWidget_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_7->addWidget(comboBox);

        lineEdit_5 = new QLineEdit(layoutWidget_4);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_7->addWidget(lineEdit_5);

        lineEdit_3 = new QLineEdit(layoutWidget_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_7->addWidget(lineEdit_3);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_4->addWidget(groupBox_2);

        pushButton_2 = new QPushButton(layoutWidget_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        groupBox_3 = new QGroupBox(wyszukaj_gracza);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 240, 441, 161));
        listView = new QListView(groupBox_3);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 30, 421, 121));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 174, 89));
        verticalLayout_23 = new QVBoxLayout(layoutWidget);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_2 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));

        verticalLayout_23->addWidget(commandLinkButton_2);

        commandLinkButton_3 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));

        verticalLayout_23->addWidget(commandLinkButton_3);


        retranslateUi(wyszukaj_gracza);

        QMetaObject::connectSlotsByName(wyszukaj_gracza);
    } // setupUi

    void retranslateUi(QDialog *wyszukaj_gracza)
    {
        wyszukaj_gracza->setWindowTitle(QApplication::translate("wyszukaj_gracza", "Dialog", 0));
        groupBox_2->setTitle(QApplication::translate("wyszukaj_gracza", "Wyszukiwanie gracza", 0));
        label_3->setText(QApplication::translate("wyszukaj_gracza", "Imi\304\231 i nazwisko", 0));
        label_4->setText(QApplication::translate("wyszukaj_gracza", "Dyscyplina", 0));
        label_6->setText(QApplication::translate("wyszukaj_gracza", "Liga", 0));
        label_8->setText(QApplication::translate("wyszukaj_gracza", "Dru\305\274yna", 0));
        pushButton_2->setText(QApplication::translate("wyszukaj_gracza", "Szukaj", 0));
        groupBox_3->setTitle(QApplication::translate("wyszukaj_gracza", "Wyniki", 0));
        commandLinkButton_2->setText(QApplication::translate("wyszukaj_gracza", "Zawodnik X", 0));
        commandLinkButton_3->setText(QApplication::translate("wyszukaj_gracza", "Zawodnik Y", 0));
    } // retranslateUi

};

namespace Ui {
    class wyszukaj_gracza: public Ui_wyszukaj_gracza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYSZUKAJ_GRACZA_H
