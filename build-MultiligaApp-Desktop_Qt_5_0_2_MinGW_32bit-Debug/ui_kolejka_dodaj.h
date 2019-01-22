/********************************************************************************
** Form generated from reading UI file 'kolejka_dodaj.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOLEJKA_DODAJ_H
#define UI_KOLEJKA_DODAJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_kolejka_dodaj
{
public:

    void setupUi(QDialog *kolejka_dodaj)
    {
        if (kolejka_dodaj->objectName().isEmpty())
            kolejka_dodaj->setObjectName(QStringLiteral("kolejka_dodaj"));
        kolejka_dodaj->resize(400, 300);

        retranslateUi(kolejka_dodaj);

        QMetaObject::connectSlotsByName(kolejka_dodaj);
    } // setupUi

    void retranslateUi(QDialog *kolejka_dodaj)
    {
        kolejka_dodaj->setWindowTitle(QApplication::translate("kolejka_dodaj", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class kolejka_dodaj: public Ui_kolejka_dodaj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOLEJKA_DODAJ_H
