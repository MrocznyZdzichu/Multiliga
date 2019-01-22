/********************************************************************************
** Form generated from reading UI file 'edytuj_ogloszenie.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDYTUJ_OGLOSZENIE_H
#define UI_EDYTUJ_OGLOSZENIE_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edytuj_ogloszenie
{
public:
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QTextEdit *textEdit;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_2;
    QLabel *label_9;

    void setupUi(QDialog *edytuj_ogloszenie)
    {
        if (edytuj_ogloszenie->objectName().isEmpty())
            edytuj_ogloszenie->setObjectName(QStringLiteral("edytuj_ogloszenie"));
        edytuj_ogloszenie->resize(344, 417);
        layoutWidget_4 = new QWidget(edytuj_ogloszenie);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 40, 321, 351));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(layoutWidget_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 70, 301, 201));
        textEdit = new QTextEdit(groupBox_5);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 281, 171));
        layoutWidget_5 = new QWidget(groupBox_4);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 30, 301, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEdit_3 = new QLineEdit(layoutWidget_5);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);

        layoutWidget = new QWidget(groupBox_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 280, 281, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);


        verticalLayout_5->addWidget(groupBox_4);

        pushButton_2 = new QPushButton(layoutWidget_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_5->addWidget(pushButton_2);

        label_9 = new QLabel(edytuj_ogloszenie);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 10, 161, 22));

        retranslateUi(edytuj_ogloszenie);

        QMetaObject::connectSlotsByName(edytuj_ogloszenie);
    } // setupUi

    void retranslateUi(QDialog *edytuj_ogloszenie)
    {
        edytuj_ogloszenie->setWindowTitle(QApplication::translate("edytuj_ogloszenie", "Dialog", 0));
        groupBox_4->setTitle(QApplication::translate("edytuj_ogloszenie", "Edytuj og\305\202oszenie", 0));
        groupBox_5->setTitle(QApplication::translate("edytuj_ogloszenie", "Tre\305\233\304\207 og\305\202oszenia", 0));
        label_7->setText(QApplication::translate("edytuj_ogloszenie", "Tytu\305\202", 0));
        label_8->setText(QApplication::translate("edytuj_ogloszenie", "Has\305\202o", 0));
        pushButton_2->setText(QApplication::translate("edytuj_ogloszenie", "Edytuj", 0));
        label_9->setText(QApplication::translate("edytuj_ogloszenie", "komunikat o z\305\202ym ha\305\233le", 0));
    } // retranslateUi

};

namespace Ui {
    class edytuj_ogloszenie: public Ui_edytuj_ogloszenie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDYTUJ_OGLOSZENIE_H
