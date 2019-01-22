/********************************************************************************
** Form generated from reading UI file 'gracz_dodaj.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRACZ_DODAJ_H
#define UI_GRACZ_DODAJ_H

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

class Ui_gracz_dodaj
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *gracz_dodaj)
    {
        if (gracz_dodaj->objectName().isEmpty())
            gracz_dodaj->setObjectName(QStringLiteral("gracz_dodaj"));
        gracz_dodaj->resize(316, 239);
        label = new QLabel(gracz_dodaj);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 121, 16));
        widget = new QWidget(gracz_dodaj);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 40, 271, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 20, 251, 113));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_3->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_3->addWidget(lineEdit_4);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_3->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addWidget(groupBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(gracz_dodaj);

        QMetaObject::connectSlotsByName(gracz_dodaj);
    } // setupUi

    void retranslateUi(QDialog *gracz_dodaj)
    {
        gracz_dodaj->setWindowTitle(QApplication::translate("gracz_dodaj", "Dialog", 0));
        label->setText(QApplication::translate("gracz_dodaj", "b\305\202\304\231dne has\305\202o", 0));
        groupBox->setTitle(QApplication::translate("gracz_dodaj", "Utw\303\263rz konto", 0));
        label_4->setText(QApplication::translate("gracz_dodaj", "Imi\304\231", 0));
        label_2->setText(QApplication::translate("gracz_dodaj", "Nazwisko", 0));
        label_5->setText(QApplication::translate("gracz_dodaj", "Email", 0));
        label_3->setText(QApplication::translate("gracz_dodaj", "Potwierd\305\272 has\305\202em", 0));
        pushButton->setText(QApplication::translate("gracz_dodaj", "Utw\303\263rz konto", 0));
    } // retranslateUi

};

namespace Ui {
    class gracz_dodaj: public Ui_gracz_dodaj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRACZ_DODAJ_H
