/********************************************************************************
** Form generated from reading UI file 'wyszukiwanie.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYSZUKIWANIE_H
#define UI_WYSZUKIWANIE_H

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

class Ui_wyszukiwanie
{
public:
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QCommandLinkButton *wyszukiwanie_2;
    QCommandLinkButton *wyszukiwanie_druzyn;
    QCommandLinkButton *wyszukiwanie_3;
    QCommandLinkButton *zaloz_druzyne_3;
    QCommandLinkButton *zaloz_druzyne_4;

    void setupUi(QDialog *wyszukiwanie)
    {
        if (wyszukiwanie->objectName().isEmpty())
            wyszukiwanie->setObjectName(QStringLiteral("wyszukiwanie"));
        wyszukiwanie->resize(377, 298);
        groupBox_6 = new QGroupBox(wyszukiwanie);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 20, 331, 261));
        layoutWidget_4 = new QWidget(groupBox_6);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 20, 311, 230));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        wyszukiwanie_2 = new QCommandLinkButton(layoutWidget_4);
        wyszukiwanie_2->setObjectName(QStringLiteral("wyszukiwanie_2"));

        verticalLayout_5->addWidget(wyszukiwanie_2);

        wyszukiwanie_druzyn = new QCommandLinkButton(layoutWidget_4);
        wyszukiwanie_druzyn->setObjectName(QStringLiteral("wyszukiwanie_druzyn"));

        verticalLayout_5->addWidget(wyszukiwanie_druzyn);

        wyszukiwanie_3 = new QCommandLinkButton(layoutWidget_4);
        wyszukiwanie_3->setObjectName(QStringLiteral("wyszukiwanie_3"));

        verticalLayout_5->addWidget(wyszukiwanie_3);

        zaloz_druzyne_3 = new QCommandLinkButton(layoutWidget_4);
        zaloz_druzyne_3->setObjectName(QStringLiteral("zaloz_druzyne_3"));

        verticalLayout_5->addWidget(zaloz_druzyne_3);

        zaloz_druzyne_4 = new QCommandLinkButton(layoutWidget_4);
        zaloz_druzyne_4->setObjectName(QStringLiteral("zaloz_druzyne_4"));

        verticalLayout_5->addWidget(zaloz_druzyne_4);


        retranslateUi(wyszukiwanie);

        QMetaObject::connectSlotsByName(wyszukiwanie);
    } // setupUi

    void retranslateUi(QDialog *wyszukiwanie)
    {
        wyszukiwanie->setWindowTitle(QApplication::translate("wyszukiwanie", "Dialog", 0));
        groupBox_6->setTitle(QApplication::translate("wyszukiwanie", "Wyszukiwanie", 0));
        wyszukiwanie_2->setText(QApplication::translate("wyszukiwanie", "Wyszukaj gracza", 0));
        wyszukiwanie_druzyn->setText(QApplication::translate("wyszukiwanie", "Wyszukaj dru\305\274yn\304\231", 0));
        wyszukiwanie_3->setText(QApplication::translate("wyszukiwanie", "Wyszukaj lig\304\231", 0));
        zaloz_druzyne_3->setText(QApplication::translate("wyszukiwanie", "Wyszukaj dyscyplin\304\231", 0));
        zaloz_druzyne_4->setText(QApplication::translate("wyszukiwanie", "Wyszukaj miasto", 0));
    } // retranslateUi

};

namespace Ui {
    class wyszukiwanie: public Ui_wyszukiwanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYSZUKIWANIE_H
