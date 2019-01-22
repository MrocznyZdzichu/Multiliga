/********************************************************************************
** Form generated from reading UI file 'profil_druzyny.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIL_DRUZYNY_H
#define UI_PROFIL_DRUZYNY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profil_druzyny
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidget;
    QComboBox *comboBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;

    void setupUi(QDialog *profil_druzyny)
    {
        if (profil_druzyny->objectName().isEmpty())
            profil_druzyny->setObjectName(QStringLiteral("profil_druzyny"));
        profil_druzyny->resize(811, 561);
        layoutWidget = new QWidget(profil_druzyny);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 421, 231));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 30, 381, 156));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);


        verticalLayout_2->addWidget(groupBox);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton->raise();
        groupBox->raise();
        groupBox_2 = new QGroupBox(profil_druzyny);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 260, 431, 281));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(15, 20, 401, 251));
        comboBox = new QComboBox(profil_druzyny);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(520, 130, 211, 22));
        horizontalLayoutWidget = new QWidget(profil_druzyny);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(480, 180, 311, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        label_8 = new QLabel(profil_druzyny);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(580, 100, 111, 20));
        verticalLayoutWidget = new QWidget(profil_druzyny);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(550, 280, 171, 251));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_3->addWidget(pushButton_6);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);


        retranslateUi(profil_druzyny);

        QMetaObject::connectSlotsByName(profil_druzyny);
    } // setupUi

    void retranslateUi(QDialog *profil_druzyny)
    {
        profil_druzyny->setWindowTitle(QApplication::translate("profil_druzyny", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("profil_druzyny", "Profil dru\305\274yny", 0));
        label->setText(QApplication::translate("profil_druzyny", "Nazwa:", 0));
        label_6->setText(QApplication::translate("profil_druzyny", "Dyscyplina:", 0));
        label_2->setText(QApplication::translate("profil_druzyny", "Kapitan: Gracz X", 0));
        label_3->setText(QApplication::translate("profil_druzyny", "Opis:", 0));
        label_4->setText(QApplication::translate("profil_druzyny", "Uczestniczy w: Liga X", 0));
        label_7->setText(QApplication::translate("profil_druzyny", "Poprzednio uczestniczy\305\202a w: Liga X", 0));
        label_5->setText(QApplication::translate("profil_druzyny", "Osi\304\205gni\304\231cia:", 0));
        pushButton->setText(QApplication::translate("profil_druzyny", "Powr\303\263t", 0));
        groupBox_2->setTitle(QApplication::translate("profil_druzyny", "Zawodnicy", 0));
        pushButton_2->setText(QApplication::translate("profil_druzyny", "Przenie\305\233 do ligi", 0));
        pushButton_4->setText(QApplication::translate("profil_druzyny", "Zapro\305\233 do ligi", 0));
        label_8->setText(QApplication::translate("profil_druzyny", "Liga docelowa:", 0));
        pushButton_5->setText(QApplication::translate("profil_druzyny", "Usu\305\204 z ligi", 0));
        pushButton_6->setText(QApplication::translate("profil_druzyny", "Edytuj dru\305\274yn\304\231", 0));
        pushButton_3->setText(QApplication::translate("profil_druzyny", "Usu\305\204 dru\305\274yn\304\231", 0));
    } // retranslateUi

};

namespace Ui {
    class profil_druzyny: public Ui_profil_druzyny {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIL_DRUZYNY_H
