/********************************************************************************
** Form generated from reading UI file 'ogloszenie.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OGLOSZENIE_H
#define UI_OGLOSZENIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ogloszenie
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *ogloszenie)
    {
        if (ogloszenie->objectName().isEmpty())
            ogloszenie->setObjectName(QStringLiteral("ogloszenie"));
        ogloszenie->resize(340, 381);
        groupBox = new QGroupBox(ogloszenie);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 321, 311));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 301, 221));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 281, 16));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 301, 41));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        commandLinkButton = new QCommandLinkButton(ogloszenie);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 330, 187, 41));

        retranslateUi(ogloszenie);

        QMetaObject::connectSlotsByName(ogloszenie);
    } // setupUi

    void retranslateUi(QDialog *ogloszenie)
    {
        ogloszenie->setWindowTitle(QApplication::translate("ogloszenie", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("ogloszenie", "Og\305\202oszenie", 0));
        groupBox_2->setTitle(QApplication::translate("ogloszenie", "Tytu\305\202", 0));
        label_3->setText(QApplication::translate("ogloszenie", "Tre\305\233\304\207 og\305\202oszenia", 0));
        label->setText(QApplication::translate("ogloszenie", "Dodane przez:", 0));
        label_2->setText(QApplication::translate("ogloszenie", "Data:", 0));
        commandLinkButton->setText(QApplication::translate("ogloszenie", "Edytuj (opiekun)", 0));
    } // retranslateUi

};

namespace Ui {
    class ogloszenie: public Ui_ogloszenie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OGLOSZENIE_H
