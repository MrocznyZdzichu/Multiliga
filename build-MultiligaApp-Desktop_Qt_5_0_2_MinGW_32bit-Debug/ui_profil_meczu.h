/********************************************************************************
** Form generated from reading UI file 'profil_meczu.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIL_MECZU_H
#define UI_PROFIL_MECZU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profil_meczu
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_12;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_4;
    QCommandLinkButton *commandLinkButton_9;

    void setupUi(QDialog *profil_meczu)
    {
        if (profil_meczu->objectName().isEmpty())
            profil_meczu->setObjectName(QStringLiteral("profil_meczu"));
        profil_meczu->resize(384, 501);
        widget = new QWidget(profil_meczu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 40, 301, 261));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 281, 201));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(layoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_12 = new QLabel(layoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout->addWidget(label_12);

        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);


        verticalLayout_2->addWidget(groupBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        widget1 = new QWidget(profil_meczu);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(40, 320, 301, 136));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_3 = new QCommandLinkButton(widget1);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));

        verticalLayout_3->addWidget(commandLinkButton_3);

        commandLinkButton_4 = new QCommandLinkButton(widget1);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));

        verticalLayout_3->addWidget(commandLinkButton_4);

        commandLinkButton_9 = new QCommandLinkButton(widget1);
        commandLinkButton_9->setObjectName(QStringLiteral("commandLinkButton_9"));

        verticalLayout_3->addWidget(commandLinkButton_9);


        retranslateUi(profil_meczu);

        QMetaObject::connectSlotsByName(profil_meczu);
    } // setupUi

    void retranslateUi(QDialog *profil_meczu)
    {
        profil_meczu->setWindowTitle(QApplication::translate("profil_meczu", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("profil_meczu", "Mecz", 0));
        label_2->setText(QApplication::translate("profil_meczu", "Dru\305\274yna / zawodnik X przeciwko Y", 0));
        label->setText(QApplication::translate("profil_meczu", "W ramach kolejki: Kolejka X", 0));
        label_3->setText(QApplication::translate("profil_meczu", "W ramach ligi: Liga X", 0));
        label_12->setText(QApplication::translate("profil_meczu", "Data:", 0));
        label_6->setText(QApplication::translate("profil_meczu", "Miejsce: Miejsce rozgrywek X", 0));
        label_7->setText(QApplication::translate("profil_meczu", "S\304\231dzia: ", 0));
        label_4->setText(QApplication::translate("profil_meczu", "Rozegrano: tak / nie", 0));
        label_5->setText(QApplication::translate("profil_meczu", "Wynik:", 0));
        pushButton->setText(QApplication::translate("profil_meczu", "Powr\303\263t", 0));
        commandLinkButton_3->setText(QApplication::translate("profil_meczu", "Wprowad\305\272 wynik (S\304\231dzia)", 0));
        commandLinkButton_4->setText(QApplication::translate("profil_meczu", "Usu\305\204 mecz (Opiekun)", 0));
        commandLinkButton_9->setText(QApplication::translate("profil_meczu", "Edytuj mecz (Opiekun)", 0));
    } // retranslateUi

};

namespace Ui {
    class profil_meczu: public Ui_profil_meczu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIL_MECZU_H
