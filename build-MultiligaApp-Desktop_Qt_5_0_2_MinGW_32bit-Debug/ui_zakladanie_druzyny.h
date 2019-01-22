/********************************************************************************
** Form generated from reading UI file 'zakladanie_druzyny.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZAKLADANIE_DRUZYNY_H
#define UI_ZAKLADANIE_DRUZYNY_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zakladanie_druzyny
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QDialog *zakladanie_druzyny)
    {
        if (zakladanie_druzyny->objectName().isEmpty())
            zakladanie_druzyny->setObjectName(QStringLiteral("zakladanie_druzyny"));
        zakladanie_druzyny->resize(269, 183);
        layoutWidget = new QWidget(zakladanie_druzyny);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 229, 124));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 211, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comboBox = new QComboBox(layoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        label_3 = new QLabel(zakladanie_druzyny);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 10, 171, 20));

        retranslateUi(zakladanie_druzyny);

        QMetaObject::connectSlotsByName(zakladanie_druzyny);
    } // setupUi

    void retranslateUi(QDialog *zakladanie_druzyny)
    {
        zakladanie_druzyny->setWindowTitle(QApplication::translate("zakladanie_druzyny", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("zakladanie_druzyny", "Zak\305\202adanie dru\305\274yny", 0));
        label->setText(QApplication::translate("zakladanie_druzyny", "Dyscyplina", 0));
        label_2->setText(QApplication::translate("zakladanie_druzyny", "Nazwa dru\305\274yny", 0));
        pushButton->setText(QApplication::translate("zakladanie_druzyny", "Za\305\202\303\263\305\274 dru\305\274yn\304\231", 0));
        label_3->setText(QApplication::translate("zakladanie_druzyny", "nazwa si\304\231 powtarza", 0));
    } // retranslateUi

};

namespace Ui {
    class zakladanie_druzyny: public Ui_zakladanie_druzyny {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZAKLADANIE_DRUZYNY_H
