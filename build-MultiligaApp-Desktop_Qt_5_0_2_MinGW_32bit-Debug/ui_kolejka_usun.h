/********************************************************************************
** Form generated from reading UI file 'kolejka_usun.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOLEJKA_USUN_H
#define UI_KOLEJKA_USUN_H

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

class Ui_kolejka_usun
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QLabel *label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *kolejka_usun)
    {
        if (kolejka_usun->objectName().isEmpty())
            kolejka_usun->setObjectName(QStringLiteral("kolejka_usun"));
        kolejka_usun->resize(400, 300);
        label_3 = new QLabel(kolejka_usun);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 20, 241, 20));
        layoutWidget = new QWidget(kolejka_usun);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 301, 131));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 251, 16));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 60, 221, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_4->addWidget(groupBox_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        retranslateUi(kolejka_usun);

        QMetaObject::connectSlotsByName(kolejka_usun);
    } // setupUi

    void retranslateUi(QDialog *kolejka_usun)
    {
        kolejka_usun->setWindowTitle(QApplication::translate("kolejka_usun", "Dialog", 0));
        label_3->setText(QApplication::translate("kolejka_usun", "nieprawdi\305\202owe has\305\202o", 0));
        groupBox_2->setTitle(QApplication::translate("kolejka_usun", "Usuni\304\231cie kolejki", 0));
        label->setText(QApplication::translate("kolejka_usun", "Aby usun\304\205\304\207 kolejk\304\231 wprowad\305\272 has\305\202o", 0));
        label_2->setText(QApplication::translate("kolejka_usun", "Has\305\202o", 0));
        pushButton->setText(QApplication::translate("kolejka_usun", "Usu\305\204 kolejk\304\231", 0));
    } // retranslateUi

};

namespace Ui {
    class kolejka_usun: public Ui_kolejka_usun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOLEJKA_USUN_H
