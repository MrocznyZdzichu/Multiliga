/********************************************************************************
** Form generated from reading UI file 'edycja_konta.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDYCJA_KONTA_H
#define UI_EDYCJA_KONTA_H

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

class Ui_edycja_konta
{
public:
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_3;
    QLabel *label_8;

    void setupUi(QDialog *edycja_konta)
    {
        if (edycja_konta->objectName().isEmpty())
            edycja_konta->setObjectName(QStringLiteral("edycja_konta"));
        edycja_konta->resize(387, 261);
        layoutWidget_6 = new QWidget(edycja_konta);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(60, 60, 261, 171));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(layoutWidget_6);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        layoutWidget_7 = new QWidget(groupBox_4);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(20, 50, 221, 71));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_6 = new QLabel(layoutWidget_7);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_10->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_7);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_10->addWidget(label_7);


        horizontalLayout_3->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        lineEdit_4 = new QLineEdit(layoutWidget_7);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_11->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget_7);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_11->addWidget(lineEdit_5);


        horizontalLayout_3->addLayout(verticalLayout_11);


        verticalLayout_9->addWidget(groupBox_4);

        pushButton_3 = new QPushButton(layoutWidget_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_9->addWidget(pushButton_3);

        label_8 = new QLabel(edycja_konta);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(130, 20, 231, 28));

        retranslateUi(edycja_konta);

        QMetaObject::connectSlotsByName(edycja_konta);
    } // setupUi

    void retranslateUi(QDialog *edycja_konta)
    {
        edycja_konta->setWindowTitle(QApplication::translate("edycja_konta", "Dialog", 0));
        groupBox_4->setTitle(QApplication::translate("edycja_konta", "Edycja konta", 0));
        label_6->setText(QApplication::translate("edycja_konta", "Nowy email", 0));
        label_7->setText(QApplication::translate("edycja_konta", "Has\305\202o", 0));
        pushButton_3->setText(QApplication::translate("edycja_konta", "Zmie\305\204", 0));
        label_8->setText(QApplication::translate("edycja_konta", "miejsce na komunikat", 0));
    } // retranslateUi

};

namespace Ui {
    class edycja_konta: public Ui_edycja_konta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDYCJA_KONTA_H
