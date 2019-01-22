/********************************************************************************
** Form generated from reading UI file 'profil_gracza.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIL_GRACZA_H
#define UI_PROFIL_GRACZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profil_gracza
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_5;
    QCommandLinkButton *commandLinkButton_8;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_10;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_4;
    QCommandLinkButton *commandLinkButton_7;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QListView *listView;
    QCommandLinkButton *commandLinkButton_6;
    QPushButton *pushButton;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *profil_gracza)
    {
        if (profil_gracza->objectName().isEmpty())
            profil_gracza->setObjectName(QStringLiteral("profil_gracza"));
        profil_gracza->resize(671, 510);
        layoutWidget = new QWidget(profil_gracza);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 20, 311, 371));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        commandLinkButton = new QCommandLinkButton(layoutWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));

        verticalLayout_2->addWidget(commandLinkButton);

        commandLinkButton_5 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_5->setObjectName(QStringLiteral("commandLinkButton_5"));

        verticalLayout_2->addWidget(commandLinkButton_5);

        commandLinkButton_8 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_8->setObjectName(QStringLiteral("commandLinkButton_8"));

        verticalLayout_2->addWidget(commandLinkButton_8);

        commandLinkButton_2 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));

        verticalLayout_2->addWidget(commandLinkButton_2);

        commandLinkButton_10 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_10->setObjectName(QStringLiteral("commandLinkButton_10"));

        verticalLayout_2->addWidget(commandLinkButton_10);

        commandLinkButton_3 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));

        verticalLayout_2->addWidget(commandLinkButton_3);

        commandLinkButton_4 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));

        verticalLayout_2->addWidget(commandLinkButton_4);

        commandLinkButton_7 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_7->setObjectName(QStringLiteral("commandLinkButton_7"));

        verticalLayout_2->addWidget(commandLinkButton_7);

        layoutWidget_2 = new QWidget(profil_gracza);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 20, 311, 471));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 30, 291, 203));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 240, 291, 191));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 20, 271, 161));
        commandLinkButton_6 = new QCommandLinkButton(groupBox_2);
        commandLinkButton_6->setObjectName(QStringLiteral("commandLinkButton_6"));
        commandLinkButton_6->setGeometry(QRect(20, 30, 187, 41));

        verticalLayout_3->addWidget(groupBox);

        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        layoutWidget_4 = new QWidget(profil_gracza);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 20, 2, 2));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(profil_gracza);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(profil_gracza);

        QMetaObject::connectSlotsByName(profil_gracza);
    } // setupUi

    void retranslateUi(QDialog *profil_gracza)
    {
        profil_gracza->setWindowTitle(QApplication::translate("profil_gracza", "Dialog", 0));
        commandLinkButton->setText(QApplication::translate("profil_gracza", "Zapro\305\233 do dru\305\274yny X (kapitan)", 0));
        commandLinkButton_5->setText(QApplication::translate("profil_gracza", "Wyrzu\304\207 z dru\305\274yny X (kapitan)", 0));
        commandLinkButton_8->setText(QApplication::translate("profil_gracza", "Zapro\305\233 do ligi X (opiekun)", 0));
        commandLinkButton_2->setText(QApplication::translate("profil_gracza", "Wyrzu\304\207 z ligi X (opiekun)", 0));
        commandLinkButton_10->setText(QApplication::translate("profil_gracza", "Przenie\305\233 do ligi X (opiekun)", 0));
        commandLinkButton_3->setText(QApplication::translate("profil_gracza", "Edytuj (opiekun)", 0));
        commandLinkButton_4->setText(QApplication::translate("profil_gracza", "Usu\305\204 (opiekun)", 0));
        commandLinkButton_7->setText(QApplication::translate("profil_gracza", "Dodaj nagrod\304\231 (opiekun)", 0));
        groupBox->setTitle(QApplication::translate("profil_gracza", "Profil gracza", 0));
        label->setText(QApplication::translate("profil_gracza", "Imi\304\231 i nazwisko:", 0));
        label_7->setText(QApplication::translate("profil_gracza", "Dru\305\274yny: dru\305\274yna X", 0));
        label_2->setText(QApplication::translate("profil_gracza", "Email:", 0));
        label_3->setText(QApplication::translate("profil_gracza", "O mnie:", 0));
        label_6->setText(QApplication::translate("profil_gracza", "Uczestniczy\305\202 w ligach: Liga X", 0));
        label_5->setText(QApplication::translate("profil_gracza", "Nagrody:", 0));
        label_4->setText(QApplication::translate("profil_gracza", "Aktualnie uczestniczy w ligach: Liga X", 0));
        groupBox_2->setTitle(QApplication::translate("profil_gracza", "Ostatnie mecze:", 0));
        commandLinkButton_6->setText(QApplication::translate("profil_gracza", "Mecz 1", 0));
        pushButton->setText(QApplication::translate("profil_gracza", "Powr\303\263t", 0));
    } // retranslateUi

};

namespace Ui {
    class profil_gracza: public Ui_profil_gracza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIL_GRACZA_H
