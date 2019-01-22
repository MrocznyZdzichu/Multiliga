/********************************************************************************
** Form generated from reading UI file 'dodaj_konto_druzyne.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJ_KONTO_DRUZYNE_H
#define UI_DODAJ_KONTO_DRUZYNE_H

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

class Ui_dodaj_konto_druzyne
{
public:
    QGroupBox *groupBox_7;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QCommandLinkButton *dodaj_konto_gracza;
    QCommandLinkButton *zaloz_druzyne_5;
    QGroupBox *groupBox_8;
    QCommandLinkButton *dodaj_konto_gracza_3;

    void setupUi(QDialog *dodaj_konto_druzyne)
    {
        if (dodaj_konto_druzyne->objectName().isEmpty())
            dodaj_konto_druzyne->setObjectName(QStringLiteral("dodaj_konto_druzyne"));
        dodaj_konto_druzyne->resize(334, 222);
        groupBox_7 = new QGroupBox(dodaj_konto_druzyne);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 311, 121));
        layoutWidget = new QWidget(groupBox_7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 291, 89));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        dodaj_konto_gracza = new QCommandLinkButton(layoutWidget);
        dodaj_konto_gracza->setObjectName(QStringLiteral("dodaj_konto_gracza"));

        verticalLayout_7->addWidget(dodaj_konto_gracza);

        zaloz_druzyne_5 = new QCommandLinkButton(layoutWidget);
        zaloz_druzyne_5->setObjectName(QStringLiteral("zaloz_druzyne_5"));

        verticalLayout_7->addWidget(zaloz_druzyne_5);

        groupBox_8 = new QGroupBox(dodaj_konto_druzyne);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 130, 311, 71));
        dodaj_konto_gracza_3 = new QCommandLinkButton(groupBox_8);
        dodaj_konto_gracza_3->setObjectName(QStringLiteral("dodaj_konto_gracza_3"));
        dodaj_konto_gracza_3->setGeometry(QRect(10, 20, 289, 40));

        retranslateUi(dodaj_konto_druzyne);

        QMetaObject::connectSlotsByName(dodaj_konto_druzyne);
    } // setupUi

    void retranslateUi(QDialog *dodaj_konto_druzyne)
    {
        dodaj_konto_druzyne->setWindowTitle(QApplication::translate("dodaj_konto_druzyne", "Dialog", 0));
        groupBox_7->setTitle(QApplication::translate("dodaj_konto_druzyne", "Tworzenie nowego konta", 0));
        dodaj_konto_gracza->setText(QApplication::translate("dodaj_konto_druzyne", "Dodaj konto gracza", 0));
        zaloz_druzyne_5->setText(QApplication::translate("dodaj_konto_druzyne", "Dodaj konto s\304\231dziego", 0));
        groupBox_8->setTitle(QApplication::translate("dodaj_konto_druzyne", "Tworzenie nowej dru\305\274yny", 0));
        dodaj_konto_gracza_3->setText(QApplication::translate("dodaj_konto_druzyne", "Dodaj dru\305\274yn\304\231", 0));
    } // retranslateUi

};

namespace Ui {
    class dodaj_konto_druzyne: public Ui_dodaj_konto_druzyne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_KONTO_DRUZYNE_H
