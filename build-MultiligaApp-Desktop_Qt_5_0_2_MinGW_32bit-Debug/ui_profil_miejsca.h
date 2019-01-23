/********************************************************************************
** Form generated from reading UI file 'profil_miejsca.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIL_MIEJSCA_H
#define UI_PROFIL_MIEJSCA_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profil_miejsca
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;

    void setupUi(QDialog *profil_miejsca)
    {
        if (profil_miejsca->objectName().isEmpty())
            profil_miejsca->setObjectName(QStringLiteral("profil_miejsca"));
        profil_miejsca->resize(663, 392);
        layoutWidget = new QWidget(profil_miejsca);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 301, 351));
        verticalLayout_8 = new QVBoxLayout(layoutWidget);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 271, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);

        verticalLayout_2->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 100, 297, 201));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 20, 256, 171));

        verticalLayout_3->addWidget(groupBox);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_8->addLayout(verticalLayout_7);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_8->addWidget(pushButton_3);

        layoutWidget1 = new QWidget(profil_miejsca);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(330, 30, 311, 101));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_2 = new QCommandLinkButton(layoutWidget1);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));

        verticalLayout_4->addWidget(commandLinkButton_2);

        commandLinkButton_3 = new QCommandLinkButton(layoutWidget1);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));

        verticalLayout_4->addWidget(commandLinkButton_3);


        retranslateUi(profil_miejsca);

        QMetaObject::connectSlotsByName(profil_miejsca);
    } // setupUi

    void retranslateUi(QDialog *profil_miejsca)
    {
        profil_miejsca->setWindowTitle(QApplication::translate("profil_miejsca", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("profil_miejsca", "Miejsce rozgrywek", 0));
        label_2->setText(QApplication::translate("profil_miejsca", "Nazwa", 0));
        label->setText(QApplication::translate("profil_miejsca", "Miasto", 0));
        groupBox_2->setTitle(QApplication::translate("profil_miejsca", "Cennik", 0));
        pushButton_3->setText(QApplication::translate("profil_miejsca", "Powr\303\263t", 0));
        commandLinkButton_2->setText(QApplication::translate("profil_miejsca", "Usu\305\204 miejsce rozgrywek", 0));
        commandLinkButton_3->setText(QApplication::translate("profil_miejsca", "Edytuj miejsce rozgrywek", 0));
    } // retranslateUi

};

namespace Ui {
    class profil_miejsca: public Ui_profil_miejsca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIL_MIEJSCA_H
