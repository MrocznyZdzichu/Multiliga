/********************************************************************************
** Form generated from reading UI file 'wyszukaj_miasto.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYSZUKAJ_MIASTO_H
#define UI_WYSZUKAJ_MIASTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wyszukaj_miasto
{
public:
    QGroupBox *groupBox_11;
    QListView *listView_6;
    QWidget *layoutWidget_13;
    QVBoxLayout *verticalLayout_26;
    QCommandLinkButton *commandLinkButton_12;
    QCommandLinkButton *commandLinkButton_13;
    QWidget *layoutWidget_14;
    QVBoxLayout *verticalLayout_27;
    QGroupBox *groupBox_12;
    QWidget *layoutWidget_15;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_28;
    QLabel *label_33;
    QLabel *label_30;
    QLabel *label_32;
    QLabel *label_31;
    QVBoxLayout *verticalLayout_29;
    QLineEdit *lineEdit_28;
    QComboBox *comboBox_6;
    QLineEdit *lineEdit_29;
    QLineEdit *lineEdit_27;
    QPushButton *pushButton_7;

    void setupUi(QDialog *wyszukaj_miasto)
    {
        if (wyszukaj_miasto->objectName().isEmpty())
            wyszukaj_miasto->setObjectName(QStringLiteral("wyszukaj_miasto"));
        wyszukaj_miasto->resize(488, 405);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(wyszukaj_miasto->sizePolicy().hasHeightForWidth());
        wyszukaj_miasto->setSizePolicy(sizePolicy);
        groupBox_11 = new QGroupBox(wyszukaj_miasto);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(20, 220, 441, 161));
        listView_6 = new QListView(groupBox_11);
        listView_6->setObjectName(QStringLiteral("listView_6"));
        listView_6->setGeometry(QRect(10, 30, 421, 121));
        layoutWidget_13 = new QWidget(groupBox_11);
        layoutWidget_13->setObjectName(QStringLiteral("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(20, 30, 174, 89));
        verticalLayout_26 = new QVBoxLayout(layoutWidget_13);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_12 = new QCommandLinkButton(layoutWidget_13);
        commandLinkButton_12->setObjectName(QStringLiteral("commandLinkButton_12"));

        verticalLayout_26->addWidget(commandLinkButton_12);

        commandLinkButton_13 = new QCommandLinkButton(layoutWidget_13);
        commandLinkButton_13->setObjectName(QStringLiteral("commandLinkButton_13"));

        verticalLayout_26->addWidget(commandLinkButton_13);

        layoutWidget_14 = new QWidget(wyszukaj_miasto);
        layoutWidget_14->setObjectName(QStringLiteral("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(20, 20, 441, 191));
        verticalLayout_27 = new QVBoxLayout(layoutWidget_14);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        groupBox_12 = new QGroupBox(layoutWidget_14);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        layoutWidget_15 = new QWidget(groupBox_12);
        layoutWidget_15->setObjectName(QStringLiteral("layoutWidget_15"));
        layoutWidget_15->setGeometry(QRect(10, 30, 421, 113));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_15);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        label_33 = new QLabel(layoutWidget_15);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout_28->addWidget(label_33);

        label_30 = new QLabel(layoutWidget_15);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_28->addWidget(label_30);

        label_32 = new QLabel(layoutWidget_15);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout_28->addWidget(label_32);

        label_31 = new QLabel(layoutWidget_15);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_28->addWidget(label_31);


        horizontalLayout_8->addLayout(verticalLayout_28);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        lineEdit_28 = new QLineEdit(layoutWidget_15);
        lineEdit_28->setObjectName(QStringLiteral("lineEdit_28"));

        verticalLayout_29->addWidget(lineEdit_28);

        comboBox_6 = new QComboBox(layoutWidget_15);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        verticalLayout_29->addWidget(comboBox_6);

        lineEdit_29 = new QLineEdit(layoutWidget_15);
        lineEdit_29->setObjectName(QStringLiteral("lineEdit_29"));

        verticalLayout_29->addWidget(lineEdit_29);

        lineEdit_27 = new QLineEdit(layoutWidget_15);
        lineEdit_27->setObjectName(QStringLiteral("lineEdit_27"));

        verticalLayout_29->addWidget(lineEdit_27);


        horizontalLayout_8->addLayout(verticalLayout_29);


        verticalLayout_27->addWidget(groupBox_12);

        pushButton_7 = new QPushButton(layoutWidget_14);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_27->addWidget(pushButton_7);


        retranslateUi(wyszukaj_miasto);

        QMetaObject::connectSlotsByName(wyszukaj_miasto);
    } // setupUi

    void retranslateUi(QDialog *wyszukaj_miasto)
    {
        wyszukaj_miasto->setWindowTitle(QApplication::translate("wyszukaj_miasto", "Dialog", 0));
        groupBox_11->setTitle(QApplication::translate("wyszukaj_miasto", "Wyniki", 0));
        commandLinkButton_12->setText(QApplication::translate("wyszukaj_miasto", "Miasto 1", 0));
        commandLinkButton_13->setText(QApplication::translate("wyszukaj_miasto", "Miasto 2", 0));
        groupBox_12->setTitle(QApplication::translate("wyszukaj_miasto", "Wyszukiwanie miasta", 0));
        label_33->setText(QApplication::translate("wyszukaj_miasto", "Nazwa", 0));
        label_30->setText(QApplication::translate("wyszukaj_miasto", "Mo\305\274liwe dyscypliny", 0));
        label_32->setText(QApplication::translate("wyszukaj_miasto", "Dru\305\274yna w mie\305\233cie", 0));
        label_31->setText(QApplication::translate("wyszukaj_miasto", "Liga w mie\305\233cie", 0));
        pushButton_7->setText(QApplication::translate("wyszukaj_miasto", "Szukaj", 0));
    } // retranslateUi

};

namespace Ui {
    class wyszukaj_miasto: public Ui_wyszukaj_miasto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYSZUKAJ_MIASTO_H
