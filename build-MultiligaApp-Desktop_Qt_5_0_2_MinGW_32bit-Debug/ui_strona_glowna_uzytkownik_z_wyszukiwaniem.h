/********************************************************************************
** Form generated from reading UI file 'strona_glowna_uzytkownik_z_wyszukiwaniem.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRONA_GLOWNA_UZYTKOWNIK_Z_WYSZUKIWANIEM_H
#define UI_STRONA_GLOWNA_UZYTKOWNIK_Z_WYSZUKIWANIEM_H

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

class Ui_strona_glowna_uzytkownik_z_wyszukiwaniem
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
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QCommandLinkButton *strona_glowna;
    QCommandLinkButton *wyloguj_2;
    QCommandLinkButton *edycja_konta;
    QCommandLinkButton *edycja_konta_2;
    QCommandLinkButton *edycja_konta_3;
    QCommandLinkButton *wyloguj;

    void setupUi(QDialog *strona_glowna_uzytkownik_z_wyszukiwaniem)
    {
        if (strona_glowna_uzytkownik_z_wyszukiwaniem->objectName().isEmpty())
            strona_glowna_uzytkownik_z_wyszukiwaniem->setObjectName(QStringLiteral("strona_glowna_uzytkownik_z_wyszukiwaniem"));
        strona_glowna_uzytkownik_z_wyszukiwaniem->resize(885, 335);
        groupBox_8 = new QGroupBox(strona_glowna_uzytkownik_z_wyszukiwaniem);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(300, 10, 571, 311));
        groupBox = new QGroupBox(groupBox_8);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 551, 271));
        ogloszenia = new QListView(groupBox);
        ogloszenia->setObjectName(QStringLiteral("ogloszenia"));
        ogloszenia->setGeometry(QRect(10, 30, 531, 231));
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

        groupBox_3 = new QGroupBox(strona_glowna_uzytkownik_z_wyszukiwaniem);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 281, 311));
        layoutWidget_5 = new QWidget(groupBox_3);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 20, 261, 277));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        strona_glowna = new QCommandLinkButton(layoutWidget_5);
        strona_glowna->setObjectName(QStringLiteral("strona_glowna"));

        verticalLayout_8->addWidget(strona_glowna);

        wyloguj_2 = new QCommandLinkButton(layoutWidget_5);
        wyloguj_2->setObjectName(QStringLiteral("wyloguj_2"));

        verticalLayout_8->addWidget(wyloguj_2);

        edycja_konta = new QCommandLinkButton(layoutWidget_5);
        edycja_konta->setObjectName(QStringLiteral("edycja_konta"));

        verticalLayout_8->addWidget(edycja_konta);

        edycja_konta_2 = new QCommandLinkButton(layoutWidget_5);
        edycja_konta_2->setObjectName(QStringLiteral("edycja_konta_2"));

        verticalLayout_8->addWidget(edycja_konta_2);

        edycja_konta_3 = new QCommandLinkButton(layoutWidget_5);
        edycja_konta_3->setObjectName(QStringLiteral("edycja_konta_3"));

        verticalLayout_8->addWidget(edycja_konta_3);

        wyloguj = new QCommandLinkButton(layoutWidget_5);
        wyloguj->setObjectName(QStringLiteral("wyloguj"));

        verticalLayout_8->addWidget(wyloguj);


        retranslateUi(strona_glowna_uzytkownik_z_wyszukiwaniem);

        QMetaObject::connectSlotsByName(strona_glowna_uzytkownik_z_wyszukiwaniem);
    } // setupUi

    void retranslateUi(QDialog *strona_glowna_uzytkownik_z_wyszukiwaniem)
    {
        strona_glowna_uzytkownik_z_wyszukiwaniem->setWindowTitle(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "Dialog", 0));
        groupBox_8->setTitle(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "Strona g\305\202\303\263wna", 0));
        groupBox->setTitle(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "Og\305\202oszenia", 0));
        commandLinkButton_4->setText(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "zmiana op\305\202at", 0));
        commandLinkButton_5->setText(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "startuje nowa liga", 0));
        commandLinkButton_6->setText(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "dost\304\231pne nowe boiska", 0));
        groupBox_3->setTitle(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "Menu", 0));
        strona_glowna->setText(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "Strona g\305\202\303\263wna", 0));
        wyloguj_2->setText(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "Wyszukiwanie", 0));
        edycja_konta->setText(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "Edycja konta", 0));
        edycja_konta_2->setText(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "Zmie\305\204 has\305\202o", 0));
        edycja_konta_3->setText(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "Usu\305\204 konto", 0));
        wyloguj->setText(QApplication::translate("strona_glowna_uzytkownik_z_wyszukiwaniem", "Wyloguj", 0));
    } // retranslateUi

};

namespace Ui {
    class strona_glowna_uzytkownik_z_wyszukiwaniem: public Ui_strona_glowna_uzytkownik_z_wyszukiwaniem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRONA_GLOWNA_UZYTKOWNIK_Z_WYSZUKIWANIEM_H
