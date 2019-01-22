/********************************************************************************
** Form generated from reading UI file 'strona_glowna_uzytkownik_zal.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRONA_GLOWNA_UZYTKOWNIK_ZAL_H
#define UI_STRONA_GLOWNA_UZYTKOWNIK_ZAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_strona_glowna_uzytkownik_zal
{
public:
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QCommandLinkButton *strona_glowna;
    QCommandLinkButton *edycja_konta;
    QCommandLinkButton *edycja_konta_2;
    QCommandLinkButton *edycja_konta_3;
    QCommandLinkButton *wyloguj;

    void setupUi(QDialog *strona_glowna_uzytkownik_zal)
    {
        if (strona_glowna_uzytkownik_zal->objectName().isEmpty())
            strona_glowna_uzytkownik_zal->setObjectName(QStringLiteral("strona_glowna_uzytkownik_zal"));
        strona_glowna_uzytkownik_zal->resize(349, 273);
        groupBox_3 = new QGroupBox(strona_glowna_uzytkownik_zal);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 10, 281, 231));
        layoutWidget_5 = new QWidget(groupBox_3);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 20, 261, 201));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        strona_glowna = new QCommandLinkButton(layoutWidget_5);
        strona_glowna->setObjectName(QStringLiteral("strona_glowna"));

        verticalLayout_8->addWidget(strona_glowna);

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


        retranslateUi(strona_glowna_uzytkownik_zal);

        QMetaObject::connectSlotsByName(strona_glowna_uzytkownik_zal);
    } // setupUi

    void retranslateUi(QDialog *strona_glowna_uzytkownik_zal)
    {
        strona_glowna_uzytkownik_zal->setWindowTitle(QApplication::translate("strona_glowna_uzytkownik_zal", "Dialog", 0));
        groupBox_3->setTitle(QApplication::translate("strona_glowna_uzytkownik_zal", "Menu", 0));
        strona_glowna->setText(QApplication::translate("strona_glowna_uzytkownik_zal", "Strona g\305\202\303\263wna", 0));
        edycja_konta->setText(QApplication::translate("strona_glowna_uzytkownik_zal", "Edycja konta", 0));
        edycja_konta_2->setText(QApplication::translate("strona_glowna_uzytkownik_zal", "Zmie\305\204 has\305\202o", 0));
        edycja_konta_3->setText(QApplication::translate("strona_glowna_uzytkownik_zal", "Usu\305\204 konto", 0));
        wyloguj->setText(QApplication::translate("strona_glowna_uzytkownik_zal", "Wyloguj", 0));
    } // retranslateUi

};

namespace Ui {
    class strona_glowna_uzytkownik_zal: public Ui_strona_glowna_uzytkownik_zal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRONA_GLOWNA_UZYTKOWNIK_ZAL_H
