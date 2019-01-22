/********************************************************************************
** Form generated from reading UI file 'dodaj_konto.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJ_KONTO_H
#define UI_DODAJ_KONTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_dodaj_konto
{
public:

    void setupUi(QDialog *dodaj_konto)
    {
        if (dodaj_konto->objectName().isEmpty())
            dodaj_konto->setObjectName(QStringLiteral("dodaj_konto"));
        dodaj_konto->resize(400, 300);

        retranslateUi(dodaj_konto);

        QMetaObject::connectSlotsByName(dodaj_konto);
    } // setupUi

    void retranslateUi(QDialog *dodaj_konto)
    {
        dodaj_konto->setWindowTitle(QApplication::translate("dodaj_konto", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class dodaj_konto: public Ui_dodaj_konto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_KONTO_H
