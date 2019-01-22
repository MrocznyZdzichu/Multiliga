/********************************************************************************
** Form generated from reading UI file 'druzyna_usun.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUZYNA_USUN_H
#define UI_DRUZYNA_USUN_H

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

class Ui_druzyna_usun
{
public:
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_5;
    QLabel *label_21;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_22;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_4;
    QLabel *label_20;

    void setupUi(QDialog *druzyna_usun)
    {
        if (druzyna_usun->objectName().isEmpty())
            druzyna_usun->setObjectName(QStringLiteral("druzyna_usun"));
        druzyna_usun->resize(340, 191);
        layoutWidget_8 = new QWidget(druzyna_usun);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(20, 40, 301, 131));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(layoutWidget_8);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 30, 251, 16));
        layoutWidget_9 = new QWidget(groupBox_5);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(40, 60, 221, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_9);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_3->addWidget(label_22);

        lineEdit_7 = new QLineEdit(layoutWidget_9);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_3->addWidget(lineEdit_7);


        verticalLayout_10->addWidget(groupBox_5);

        pushButton_4 = new QPushButton(layoutWidget_8);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_10->addWidget(pushButton_4);

        label_20 = new QLabel(druzyna_usun);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(90, 10, 241, 20));

        retranslateUi(druzyna_usun);

        QMetaObject::connectSlotsByName(druzyna_usun);
    } // setupUi

    void retranslateUi(QDialog *druzyna_usun)
    {
        druzyna_usun->setWindowTitle(QApplication::translate("druzyna_usun", "Dialog", 0));
        groupBox_5->setTitle(QApplication::translate("druzyna_usun", "Usuni\304\231cie dru\305\274yny", 0));
        label_21->setText(QApplication::translate("druzyna_usun", "Aby usun\304\205\304\207 dru\305\274yn\304\231: dru\305\274yna X wpisz has\305\202o", 0));
        label_22->setText(QApplication::translate("druzyna_usun", "Has\305\202o", 0));
        pushButton_4->setText(QApplication::translate("druzyna_usun", "Usu\305\204 lig\304\231", 0));
        label_20->setText(QApplication::translate("druzyna_usun", "nieprawdi\305\202owe has\305\202o", 0));
    } // retranslateUi

};

namespace Ui {
    class druzyna_usun: public Ui_druzyna_usun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUZYNA_USUN_H
