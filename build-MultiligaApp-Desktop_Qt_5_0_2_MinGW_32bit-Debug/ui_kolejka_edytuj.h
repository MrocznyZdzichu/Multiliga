/********************************************************************************
** Form generated from reading UI file 'kolejka_edytuj.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOLEJKA_EDYTUJ_H
#define UI_KOLEJKA_EDYTUJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kolejka_edytuj
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_19;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_14;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *kolejka_edytuj)
    {
        if (kolejka_edytuj->objectName().isEmpty())
            kolejka_edytuj->setObjectName(QStringLiteral("kolejka_edytuj"));
        kolejka_edytuj->resize(340, 259);
        layoutWidget = new QWidget(kolejka_edytuj);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 180, 311, 24));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_8->addWidget(label_19);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_8->addWidget(lineEdit_8);

        pushButton_3 = new QPushButton(kolejka_edytuj);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 210, 311, 28));
        groupBox_6 = new QGroupBox(kolejka_edytuj);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 10, 331, 171));
        layoutWidget_2 = new QWidget(groupBox_6);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 315, 142));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_9->addWidget(label_7);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_9->addWidget(label_12);

        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_9->addWidget(label_15);

        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_9->addWidget(label_17);

        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_9->addWidget(label_16);


        horizontalLayout_6->addLayout(verticalLayout_9);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_14->addWidget(lineEdit_3);

        lineEdit_7 = new QLineEdit(layoutWidget_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_14->addWidget(lineEdit_7);

        lineEdit_6 = new QLineEdit(layoutWidget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_14->addWidget(lineEdit_6);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_14->addWidget(lineEdit_5);

        lineEdit_4 = new QLineEdit(layoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_14->addWidget(lineEdit_4);


        horizontalLayout_6->addLayout(verticalLayout_14);


        retranslateUi(kolejka_edytuj);

        QMetaObject::connectSlotsByName(kolejka_edytuj);
    } // setupUi

    void retranslateUi(QDialog *kolejka_edytuj)
    {
        kolejka_edytuj->setWindowTitle(QApplication::translate("kolejka_edytuj", "Dialog", 0));
        label_19->setText(QApplication::translate("kolejka_edytuj", "Wprowad\305\272 has\305\202o", 0));
        pushButton_3->setText(QApplication::translate("kolejka_edytuj", "Zmie\305\204", 0));
        groupBox_6->setTitle(QApplication::translate("kolejka_edytuj", "Edytuj zasady", 0));
        label_7->setText(QApplication::translate("kolejka_edytuj", "Ilo\305\233\304\207 meczy na kolejk\304\231:", 0));
        label_12->setText(QApplication::translate("kolejka_edytuj", "Liczebno\305\233\304\207 dru\305\274yn:", 0));
        label_15->setText(QApplication::translate("kolejka_edytuj", "Ilo\305\233\304\207 podmeczy", 0));
        label_17->setText(QApplication::translate("kolejka_edytuj", "D\305\202ugo\305\233\304\207 podmeczy", 0));
        label_16->setText(QApplication::translate("kolejka_edytuj", "Ilo\305\233\304\207 punkt\303\263w do zwyci\304\231stwa", 0));
    } // retranslateUi

};

namespace Ui {
    class kolejka_edytuj: public Ui_kolejka_edytuj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOLEJKA_EDYTUJ_H
