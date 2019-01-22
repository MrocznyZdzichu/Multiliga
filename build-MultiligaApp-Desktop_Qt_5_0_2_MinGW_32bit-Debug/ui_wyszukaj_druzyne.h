/********************************************************************************
** Form generated from reading UI file 'wyszukaj_druzyne.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYSZUKAJ_DRUZYNE_H
#define UI_WYSZUKAJ_DRUZYNE_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wyszukaj_druzyne
{
public:
    QGroupBox *groupBox_6;
    QTableWidget *tableWidget;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_18;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *lineEdit_11;
    QComboBox *comboBox;
    QComboBox *comboBox_3;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QDialog *wyszukaj_druzyne)
    {
        if (wyszukaj_druzyne->objectName().isEmpty())
            wyszukaj_druzyne->setObjectName(QStringLiteral("wyszukaj_druzyne"));
        wyszukaj_druzyne->resize(481, 551);
        groupBox_6 = new QGroupBox(wyszukaj_druzyne);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 290, 441, 251));
        tableWidget = new QTableWidget(groupBox_6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 31, 421, 211));
        layoutWidget_5 = new QWidget(wyszukaj_druzyne);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 30, 441, 241));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(layoutWidget_5);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        layoutWidget_6 = new QWidget(groupBox_4);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 30, 421, 171));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_12 = new QLabel(layoutWidget_6);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_9->addWidget(label_12);

        label_14 = new QLabel(layoutWidget_6);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_9->addWidget(label_14);

        label_18 = new QLabel(layoutWidget_6);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_9->addWidget(label_18);

        label_13 = new QLabel(layoutWidget_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_9->addWidget(label_13);


        horizontalLayout_3->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        lineEdit_11 = new QLineEdit(layoutWidget_6);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        verticalLayout_10->addWidget(lineEdit_11);

        comboBox = new QComboBox(layoutWidget_6);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_10->addWidget(comboBox);

        comboBox_3 = new QComboBox(layoutWidget_6);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        verticalLayout_10->addWidget(comboBox_3);

        comboBox_2 = new QComboBox(layoutWidget_6);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout_10->addWidget(comboBox_2);


        horizontalLayout_3->addLayout(verticalLayout_10);


        verticalLayout_8->addWidget(groupBox_4);

        pushButton_3 = new QPushButton(layoutWidget_5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_8->addWidget(pushButton_3);

        label = new QLabel(wyszukaj_druzyne);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 10, 231, 20));

        retranslateUi(wyszukaj_druzyne);

        QMetaObject::connectSlotsByName(wyszukaj_druzyne);
    } // setupUi

    void retranslateUi(QDialog *wyszukaj_druzyne)
    {
        wyszukaj_druzyne->setWindowTitle(QApplication::translate("wyszukaj_druzyne", "Dialog", 0));
        groupBox_6->setTitle(QApplication::translate("wyszukaj_druzyne", "Wyniki", 0));
        groupBox_4->setTitle(QApplication::translate("wyszukaj_druzyne", "Wyszukiwanie dru\305\274yny", 0));
        label_12->setText(QApplication::translate("wyszukaj_druzyne", "Nazwa", 0));
        label_14->setText(QApplication::translate("wyszukaj_druzyne", "Liga", 0));
        label_18->setText(QApplication::translate("wyszukaj_druzyne", "Miasto", 0));
        label_13->setText(QApplication::translate("wyszukaj_druzyne", "Dyscyplina", 0));
        pushButton_3->setText(QApplication::translate("wyszukaj_druzyne", "Szukaj", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class wyszukaj_druzyne: public Ui_wyszukaj_druzyne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYSZUKAJ_DRUZYNE_H
