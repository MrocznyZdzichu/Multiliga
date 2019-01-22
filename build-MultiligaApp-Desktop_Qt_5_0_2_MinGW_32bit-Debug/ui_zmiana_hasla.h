/********************************************************************************
** Form generated from reading UI file 'zmiana_hasla.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZMIANA_HASLA_H
#define UI_ZMIANA_HASLA_H

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

class Ui_zmiana_hasla
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *zmiana_hasla)
    {
        if (zmiana_hasla->objectName().isEmpty())
            zmiana_hasla->setObjectName(QStringLiteral("zmiana_hasla"));
        zmiana_hasla->resize(338, 270);
        label_2 = new QLabel(zmiana_hasla);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 30, 151, 16));
        layoutWidget = new QWidget(zmiana_hasla);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 251, 171));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 40, 221, 91));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        retranslateUi(zmiana_hasla);

        QMetaObject::connectSlotsByName(zmiana_hasla);
    } // setupUi

    void retranslateUi(QDialog *zmiana_hasla)
    {
        zmiana_hasla->setWindowTitle(QApplication::translate("zmiana_hasla", "Dialog", 0));
        label_2->setText(QApplication::translate("zmiana_hasla", "miejsce na komunikat", 0));
        groupBox->setTitle(QApplication::translate("zmiana_hasla", "Zmiana has\305\202a", 0));
        label_3->setText(QApplication::translate("zmiana_hasla", "Stare has\305\202o", 0));
        label->setText(QApplication::translate("zmiana_hasla", "Nowe has\305\202o", 0));
        label_4->setText(QApplication::translate("zmiana_hasla", "Powt\303\263rz has\305\202o", 0));
        pushButton->setText(QApplication::translate("zmiana_hasla", "Zmie\305\204", 0));
    } // retranslateUi

};

namespace Ui {
    class zmiana_hasla: public Ui_zmiana_hasla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZMIANA_HASLA_H
