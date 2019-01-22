/********************************************************************************
** Form generated from reading UI file 'edycja_konta_gracz.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDYCJA_KONTA_GRACZ_H
#define UI_EDYCJA_KONTA_GRACZ_H

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

class Ui_edycja_konta_gracz
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_7;

    void setupUi(QDialog *edycja_konta_gracz)
    {
        if (edycja_konta_gracz->objectName().isEmpty())
            edycja_konta_gracz->setObjectName(QStringLiteral("edycja_konta_gracz"));
        edycja_konta_gracz->resize(407, 324);
        layoutWidget = new QWidget(edycja_konta_gracz);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 381, 241));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 20, 341, 171));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_4 = new QLineEdit(layoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        label_7 = new QLabel(edycja_konta_gracz);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 20, 271, 28));

        retranslateUi(edycja_konta_gracz);

        QMetaObject::connectSlotsByName(edycja_konta_gracz);
    } // setupUi

    void retranslateUi(QDialog *edycja_konta_gracz)
    {
        edycja_konta_gracz->setWindowTitle(QApplication::translate("edycja_konta_gracz", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("edycja_konta_gracz", "Edycja konta", 0));
        label_2->setText(QApplication::translate("edycja_konta_gracz", "Nowe imi\304\231", 0));
        label_3->setText(QApplication::translate("edycja_konta_gracz", "Nowe nazwisko", 0));
        label_5->setText(QApplication::translate("edycja_konta_gracz", "Nowy email", 0));
        label_4->setText(QApplication::translate("edycja_konta_gracz", "O mnie", 0));
        label_6->setText(QApplication::translate("edycja_konta_gracz", "Podaj has\305\202o", 0));
        pushButton->setText(QApplication::translate("edycja_konta_gracz", "Zmie\305\204", 0));
        label_7->setText(QApplication::translate("edycja_konta_gracz", "miejsce na komunikat o niepoprawnym ha\305\233le", 0));
    } // retranslateUi

};

namespace Ui {
    class edycja_konta_gracz: public Ui_edycja_konta_gracz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDYCJA_KONTA_GRACZ_H
