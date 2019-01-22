/********************************************************************************
** Form generated from reading UI file 'profil_miasta.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIL_MIASTA_H
#define UI_PROFIL_MIASTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profil_miasta
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QListView *listView;
    QCommandLinkButton *commandLinkButton_6;
    QCommandLinkButton *commandLinkButton_7;
    QGroupBox *groupBox_4;
    QListView *listView_2;
    QCommandLinkButton *commandLinkButton_8;
    QPushButton *pushButton;

    void setupUi(QDialog *profil_miasta)
    {
        if (profil_miasta->objectName().isEmpty())
            profil_miasta->setObjectName(QStringLiteral("profil_miasta"));
        profil_miasta->resize(366, 603);
        layoutWidget = new QWidget(profil_miasta);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 321, 481));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 30, 281, 131));
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

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 170, 291, 131));
        listView = new QListView(groupBox_3);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 20, 271, 101));
        commandLinkButton_6 = new QCommandLinkButton(groupBox_3);
        commandLinkButton_6->setObjectName(QStringLiteral("commandLinkButton_6"));
        commandLinkButton_6->setGeometry(QRect(20, 30, 187, 41));
        commandLinkButton_7 = new QCommandLinkButton(groupBox_3);
        commandLinkButton_7->setObjectName(QStringLiteral("commandLinkButton_7"));
        commandLinkButton_7->setGeometry(QRect(140, 30, 187, 41));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 310, 291, 131));
        listView_2 = new QListView(groupBox_4);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(10, 20, 271, 101));
        commandLinkButton_8 = new QCommandLinkButton(groupBox_4);
        commandLinkButton_8->setObjectName(QStringLiteral("commandLinkButton_8"));
        commandLinkButton_8->setGeometry(QRect(20, 30, 187, 41));

        verticalLayout_4->addWidget(groupBox);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        retranslateUi(profil_miasta);

        QMetaObject::connectSlotsByName(profil_miasta);
    } // setupUi

    void retranslateUi(QDialog *profil_miasta)
    {
        profil_miasta->setWindowTitle(QApplication::translate("profil_miasta", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("profil_miasta", "Miasto", 0));
        label->setText(QApplication::translate("profil_miasta", "Nazwa:", 0));
        label_6->setText(QApplication::translate("profil_miasta", "Liczba graczy:", 0));
        label_7->setText(QApplication::translate("profil_miasta", "Liczba dru\305\274yn:", 0));
        label_2->setText(QApplication::translate("profil_miasta", "Liczba lig:", 0));
        label_3->setText(QApplication::translate("profil_miasta", "Ilo\305\233\304\207 o\305\233rodk\303\263w:", 0));
        groupBox_3->setTitle(QApplication::translate("profil_miasta", "Ligi rozgywane w mie\305\233cie:", 0));
        commandLinkButton_6->setText(QApplication::translate("profil_miasta", "Liga X", 0));
        commandLinkButton_7->setText(QApplication::translate("profil_miasta", "Dyscyplina", 0));
        groupBox_4->setTitle(QApplication::translate("profil_miasta", "Dost\304\231pne o\305\233rodki:", 0));
        commandLinkButton_8->setText(QApplication::translate("profil_miasta", "Miejsce rozgrywek X", 0));
        pushButton->setText(QApplication::translate("profil_miasta", "Powr\303\263t", 0));
    } // retranslateUi

};

namespace Ui {
    class profil_miasta: public Ui_profil_miasta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIL_MIASTA_H
