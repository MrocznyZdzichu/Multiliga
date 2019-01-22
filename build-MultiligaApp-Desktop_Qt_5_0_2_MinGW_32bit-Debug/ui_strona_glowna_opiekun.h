/********************************************************************************
** Form generated from reading UI file 'strona_glowna_opiekun.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRONA_GLOWNA_OPIEKUN_H
#define UI_STRONA_GLOWNA_OPIEKUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_strona_glowna_opiekun
{
public:
    QGroupBox *groupBox_8;
    QGroupBox *groupBox;
    QListView *ogloszenia;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QCommandLinkButton *commandLinkButton_4;
    QCommandLinkButton *commandLinkButton_5;
    QCommandLinkButton *commandLinkButton_6;
    QGroupBox *groupBox_2;
    QListView *ogloszenia_2;
    QCommandLinkButton *commandLinkButton_7;
    QCommandLinkButton *commandLinkButton_12;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QCommandLinkButton *strona_glowna;
    QCommandLinkButton *wyloguj_2;
    QCommandLinkButton *edycja_konta_4;
    QCommandLinkButton *edycja_konta_5;
    QCommandLinkButton *edycja_konta_6;
    QCommandLinkButton *edycja_konta;
    QCommandLinkButton *edycja_konta_7;
    QCommandLinkButton *edycja_konta_2;
    QCommandLinkButton *edycja_konta_3;
    QCommandLinkButton *wyloguj;

    void setupUi(QDialog *strona_glowna_opiekun)
    {
        if (strona_glowna_opiekun->objectName().isEmpty())
            strona_glowna_opiekun->setObjectName(QStringLiteral("strona_glowna_opiekun"));
        strona_glowna_opiekun->resize(878, 565);
        groupBox_8 = new QGroupBox(strona_glowna_opiekun);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(300, 10, 571, 501));
        groupBox = new QGroupBox(groupBox_8);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 551, 201));
        ogloszenia = new QListView(groupBox);
        ogloszenia->setObjectName(QStringLiteral("ogloszenia"));
        ogloszenia->setGeometry(QRect(10, 30, 531, 161));
        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 40, 511, 136));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_4 = new QCommandLinkButton(layoutWidget_3);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));

        verticalLayout_6->addWidget(commandLinkButton_4);

        commandLinkButton_5 = new QCommandLinkButton(layoutWidget_3);
        commandLinkButton_5->setObjectName(QStringLiteral("commandLinkButton_5"));

        verticalLayout_6->addWidget(commandLinkButton_5);

        commandLinkButton_6 = new QCommandLinkButton(layoutWidget_3);
        commandLinkButton_6->setObjectName(QStringLiteral("commandLinkButton_6"));

        verticalLayout_6->addWidget(commandLinkButton_6);

        groupBox_2 = new QGroupBox(groupBox_8);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 220, 551, 271));
        ogloszenia_2 = new QListView(groupBox_2);
        ogloszenia_2->setObjectName(QStringLiteral("ogloszenia_2"));
        ogloszenia_2->setGeometry(QRect(10, 20, 531, 241));
        commandLinkButton_7 = new QCommandLinkButton(groupBox_2);
        commandLinkButton_7->setObjectName(QStringLiteral("commandLinkButton_7"));
        commandLinkButton_7->setGeometry(QRect(20, 30, 509, 134));
        commandLinkButton_12 = new QCommandLinkButton(groupBox_2);
        commandLinkButton_12->setObjectName(QStringLiteral("commandLinkButton_12"));
        commandLinkButton_12->setGeometry(QRect(20, 70, 509, 134));
        groupBox_3 = new QGroupBox(strona_glowna_opiekun);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 281, 501));
        layoutWidget_5 = new QWidget(groupBox_3);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 20, 261, 471));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        strona_glowna = new QCommandLinkButton(layoutWidget_5);
        strona_glowna->setObjectName(QStringLiteral("strona_glowna"));

        verticalLayout_8->addWidget(strona_glowna);

        wyloguj_2 = new QCommandLinkButton(layoutWidget_5);
        wyloguj_2->setObjectName(QStringLiteral("wyloguj_2"));

        verticalLayout_8->addWidget(wyloguj_2);

        edycja_konta_4 = new QCommandLinkButton(layoutWidget_5);
        edycja_konta_4->setObjectName(QStringLiteral("edycja_konta_4"));

        verticalLayout_8->addWidget(edycja_konta_4);

        edycja_konta_5 = new QCommandLinkButton(layoutWidget_5);
        edycja_konta_5->setObjectName(QStringLiteral("edycja_konta_5"));

        verticalLayout_8->addWidget(edycja_konta_5);

        edycja_konta_6 = new QCommandLinkButton(layoutWidget_5);
        edycja_konta_6->setObjectName(QStringLiteral("edycja_konta_6"));

        verticalLayout_8->addWidget(edycja_konta_6);

        edycja_konta = new QCommandLinkButton(layoutWidget_5);
        edycja_konta->setObjectName(QStringLiteral("edycja_konta"));

        verticalLayout_8->addWidget(edycja_konta);

        edycja_konta_7 = new QCommandLinkButton(layoutWidget_5);
        edycja_konta_7->setObjectName(QStringLiteral("edycja_konta_7"));

        verticalLayout_8->addWidget(edycja_konta_7);

        edycja_konta_2 = new QCommandLinkButton(layoutWidget_5);
        edycja_konta_2->setObjectName(QStringLiteral("edycja_konta_2"));

        verticalLayout_8->addWidget(edycja_konta_2);

        edycja_konta_3 = new QCommandLinkButton(layoutWidget_5);
        edycja_konta_3->setObjectName(QStringLiteral("edycja_konta_3"));

        verticalLayout_8->addWidget(edycja_konta_3);

        wyloguj = new QCommandLinkButton(layoutWidget_5);
        wyloguj->setObjectName(QStringLiteral("wyloguj"));

        verticalLayout_8->addWidget(wyloguj);


        retranslateUi(strona_glowna_opiekun);

        QMetaObject::connectSlotsByName(strona_glowna_opiekun);
    } // setupUi

    void retranslateUi(QDialog *strona_glowna_opiekun)
    {
        strona_glowna_opiekun->setWindowTitle(QApplication::translate("strona_glowna_opiekun", "Dialog", 0));
        groupBox_8->setTitle(QApplication::translate("strona_glowna_opiekun", "Strona g\305\202\303\263wna", 0));
        groupBox->setTitle(QApplication::translate("strona_glowna_opiekun", "Og\305\202oszenia", 0));
        commandLinkButton_4->setText(QApplication::translate("strona_glowna_opiekun", "zmiana op\305\202at", 0));
        commandLinkButton_5->setText(QApplication::translate("strona_glowna_opiekun", "startuje nowa liga", 0));
        commandLinkButton_6->setText(QApplication::translate("strona_glowna_opiekun", "dost\304\231pne nowe boiska", 0));
        groupBox_2->setTitle(QApplication::translate("strona_glowna_opiekun", "Harmonogram", 0));
        commandLinkButton_7->setText(QApplication::translate("strona_glowna_opiekun", "Nadchodz\304\205cy mecz nr 1", 0));
        commandLinkButton_12->setText(QApplication::translate("strona_glowna_opiekun", "Nadchodz\304\205cy mecz nr 2", 0));
        groupBox_3->setTitle(QApplication::translate("strona_glowna_opiekun", "Menu", 0));
        strona_glowna->setText(QApplication::translate("strona_glowna_opiekun", "Strona g\305\202\303\263wna", 0));
        wyloguj_2->setText(QApplication::translate("strona_glowna_opiekun", "Wyszukiwanie", 0));
        edycja_konta_4->setText(QApplication::translate("strona_glowna_opiekun", "Zarz\304\205dzaj ligami", 0));
        edycja_konta_5->setText(QApplication::translate("strona_glowna_opiekun", "Zarz\304\205dzaj miejscami", 0));
        edycja_konta_6->setText(QApplication::translate("strona_glowna_opiekun", "Dodaj konto / dru\305\274yn\304\231", 0));
        edycja_konta->setText(QApplication::translate("strona_glowna_opiekun", "Dodaj og\305\202oszenie", 0));
        edycja_konta_7->setText(QApplication::translate("strona_glowna_opiekun", "Edycja konta", 0));
        edycja_konta_2->setText(QApplication::translate("strona_glowna_opiekun", "Zmie\305\204 has\305\202o", 0));
        edycja_konta_3->setText(QApplication::translate("strona_glowna_opiekun", "Usu\305\204 konto", 0));
        wyloguj->setText(QApplication::translate("strona_glowna_opiekun", "Wyloguj", 0));
    } // retranslateUi

};

namespace Ui {
    class strona_glowna_opiekun: public Ui_strona_glowna_opiekun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRONA_GLOWNA_OPIEKUN_H
