/********************************************************************************
** Form generated from reading UI file 'dodaj_mecz.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJ_MECZ_H
#define UI_DODAJ_MECZ_H

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

class Ui_dodaj_mecz
{
public:
    QWidget *layoutWidget_18;
    QVBoxLayout *verticalLayout_19;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget_20;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_31;
    QLineEdit *lineEdit_15;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QVBoxLayout *verticalLayout_21;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_13;
    QPushButton *pushButton_6;

    void setupUi(QDialog *dodaj_mecz)
    {
        if (dodaj_mecz->objectName().isEmpty())
            dodaj_mecz->setObjectName(QStringLiteral("dodaj_mecz"));
        dodaj_mecz->resize(400, 300);
        layoutWidget_18 = new QWidget(dodaj_mecz);
        layoutWidget_18->setObjectName(QStringLiteral("layoutWidget_18"));
        layoutWidget_18->setGeometry(QRect(30, 20, 301, 261));
        verticalLayout_19 = new QVBoxLayout(layoutWidget_18);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(layoutWidget_18);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        layoutWidget_20 = new QWidget(groupBox_8);
        layoutWidget_20->setObjectName(QStringLiteral("layoutWidget_20"));
        layoutWidget_20->setGeometry(QRect(40, 190, 221, 24));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_20);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(layoutWidget_20);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_13->addWidget(label_31);

        lineEdit_15 = new QLineEdit(layoutWidget_20);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));

        horizontalLayout_13->addWidget(lineEdit_15);

        layoutWidget = new QWidget(groupBox_8);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 281, 161));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        label_29 = new QLabel(layoutWidget);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_20->addWidget(label_29);

        label_30 = new QLabel(layoutWidget);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_20->addWidget(label_30);

        label_32 = new QLabel(layoutWidget);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout_20->addWidget(label_32);

        label_33 = new QLabel(layoutWidget);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout_20->addWidget(label_33);

        label_34 = new QLabel(layoutWidget);
        label_34->setObjectName(QStringLiteral("label_34"));

        verticalLayout_20->addWidget(label_34);


        horizontalLayout_12->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        lineEdit_12 = new QLineEdit(layoutWidget);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        verticalLayout_21->addWidget(lineEdit_12);

        lineEdit_14 = new QLineEdit(layoutWidget);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));

        verticalLayout_21->addWidget(lineEdit_14);

        lineEdit_11 = new QLineEdit(layoutWidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        verticalLayout_21->addWidget(lineEdit_11);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        verticalLayout_21->addWidget(lineEdit_10);

        lineEdit_13 = new QLineEdit(layoutWidget);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        verticalLayout_21->addWidget(lineEdit_13);


        horizontalLayout_12->addLayout(verticalLayout_21);


        verticalLayout_19->addWidget(groupBox_8);

        pushButton_6 = new QPushButton(layoutWidget_18);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_19->addWidget(pushButton_6);


        retranslateUi(dodaj_mecz);

        QMetaObject::connectSlotsByName(dodaj_mecz);
    } // setupUi

    void retranslateUi(QDialog *dodaj_mecz)
    {
        dodaj_mecz->setWindowTitle(QApplication::translate("dodaj_mecz", "Dialog", 0));
        groupBox_8->setTitle(QApplication::translate("dodaj_mecz", "Dodaj mecz", 0));
        label_31->setText(QApplication::translate("dodaj_mecz", "Has\305\202o", 0));
        label_29->setText(QApplication::translate("dodaj_mecz", "Pierwszy uczestnik", 0));
        label_30->setText(QApplication::translate("dodaj_mecz", "Drugi uczestnik", 0));
        label_32->setText(QApplication::translate("dodaj_mecz", "Data:", 0));
        label_33->setText(QApplication::translate("dodaj_mecz", "Miejsce:", 0));
        label_34->setText(QApplication::translate("dodaj_mecz", "S\304\231dzia: ", 0));
        pushButton_6->setText(QApplication::translate("dodaj_mecz", "Dodaj", 0));
    } // retranslateUi

};

namespace Ui {
    class dodaj_mecz: public Ui_dodaj_mecz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_MECZ_H
