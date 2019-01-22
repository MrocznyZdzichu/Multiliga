/********************************************************************************
** Form generated from reading UI file 'profil_dyscypliny.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIL_DYSCYPLINY_H
#define UI_PROFIL_DYSCYPLINY_H

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

class Ui_profil_dyscypliny
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_4;
    QListView *listView_2;
    QCommandLinkButton *commandLinkButton_8;
    QCommandLinkButton *commandLinkButton_9;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_3;
    QListView *listView;
    QCommandLinkButton *commandLinkButton_6;
    QCommandLinkButton *commandLinkButton_7;
    QPushButton *pushButton;

    void setupUi(QDialog *profil_dyscypliny)
    {
        if (profil_dyscypliny->objectName().isEmpty())
            profil_dyscypliny->setObjectName(QStringLiteral("profil_dyscypliny"));
        profil_dyscypliny->resize(817, 450);
        layoutWidget = new QWidget(profil_dyscypliny);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(480, -10, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(profil_dyscypliny);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(350, 20, 431, 411));
        listView_2 = new QListView(groupBox_4);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(10, 20, 411, 381));
        commandLinkButton_8 = new QCommandLinkButton(groupBox_4);
        commandLinkButton_8->setObjectName(QStringLiteral("commandLinkButton_8"));
        commandLinkButton_8->setGeometry(QRect(20, 30, 187, 41));
        commandLinkButton_9 = new QCommandLinkButton(groupBox_4);
        commandLinkButton_9->setObjectName(QStringLiteral("commandLinkButton_9"));
        commandLinkButton_9->setGeometry(QRect(220, 30, 187, 41));
        widget = new QWidget(profil_dyscypliny);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 321, 411));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 30, 281, 141));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 180, 291, 181));
        listView = new QListView(groupBox_3);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 20, 271, 151));
        commandLinkButton_6 = new QCommandLinkButton(groupBox_3);
        commandLinkButton_6->setObjectName(QStringLiteral("commandLinkButton_6"));
        commandLinkButton_6->setGeometry(QRect(20, 30, 187, 41));
        commandLinkButton_7 = new QCommandLinkButton(groupBox_3);
        commandLinkButton_7->setObjectName(QStringLiteral("commandLinkButton_7"));
        commandLinkButton_7->setGeometry(QRect(150, 30, 187, 41));

        verticalLayout_4->addWidget(groupBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        retranslateUi(profil_dyscypliny);

        QMetaObject::connectSlotsByName(profil_dyscypliny);
    } // setupUi

    void retranslateUi(QDialog *profil_dyscypliny)
    {
        profil_dyscypliny->setWindowTitle(QApplication::translate("profil_dyscypliny", "Dialog", 0));
        groupBox_4->setTitle(QApplication::translate("profil_dyscypliny", "Najlepsze dru\305\274yny / zawodnicy:", 0));
        commandLinkButton_8->setText(QApplication::translate("profil_dyscypliny", "Zawodnik/dru\305\274yna X", 0));
        commandLinkButton_9->setText(QApplication::translate("profil_dyscypliny", "Liga, wynik", 0));
        groupBox->setTitle(QApplication::translate("profil_dyscypliny", "Dyscyplina", 0));
        label->setText(QApplication::translate("profil_dyscypliny", "Nazwa:", 0));
        label_6->setText(QApplication::translate("profil_dyscypliny", "Ilo\305\233\304\207 graczy:", 0));
        label_7->setText(QApplication::translate("profil_dyscypliny", "Ilo\305\233\304\207 dru\305\274yn:", 0));
        label_2->setText(QApplication::translate("profil_dyscypliny", "Ilo\305\233\304\207 lig:", 0));
        label_3->setText(QApplication::translate("profil_dyscypliny", "Dost\304\231pna w miastach: Miasto X", 0));
        label_4->setText(QApplication::translate("profil_dyscypliny", "Opis:", 0));
        groupBox_3->setTitle(QApplication::translate("profil_dyscypliny", "Ligi rozgywane w ramach dyscypliny:", 0));
        commandLinkButton_6->setText(QApplication::translate("profil_dyscypliny", "Liga X", 0));
        commandLinkButton_7->setText(QApplication::translate("profil_dyscypliny", "Miasto", 0));
        pushButton->setText(QApplication::translate("profil_dyscypliny", "Powr\303\263t", 0));
    } // retranslateUi

};

namespace Ui {
    class profil_dyscypliny: public Ui_profil_dyscypliny {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIL_DYSCYPLINY_H
