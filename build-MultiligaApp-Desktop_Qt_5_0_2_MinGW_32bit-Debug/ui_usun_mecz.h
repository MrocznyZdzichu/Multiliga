/********************************************************************************
** Form generated from reading UI file 'usun_mecz.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USUN_MECZ_H
#define UI_USUN_MECZ_H

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

class Ui_usun_mecz
{
public:
    QWidget *layoutWidget_26;
    QVBoxLayout *verticalLayout_28;
    QGroupBox *groupBox_11;
    QLabel *label_49;
    QWidget *layoutWidget_27;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_50;
    QLineEdit *lineEdit_29;
    QPushButton *pushButton_9;
    QLabel *label_51;

    void setupUi(QDialog *usun_mecz)
    {
        if (usun_mecz->objectName().isEmpty())
            usun_mecz->setObjectName(QStringLiteral("usun_mecz"));
        usun_mecz->resize(765, 423);
        layoutWidget_26 = new QWidget(usun_mecz);
        layoutWidget_26->setObjectName(QStringLiteral("layoutWidget_26"));
        layoutWidget_26->setGeometry(QRect(20, 50, 301, 131));
        verticalLayout_28 = new QVBoxLayout(layoutWidget_26);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        groupBox_11 = new QGroupBox(layoutWidget_26);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        label_49 = new QLabel(groupBox_11);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(30, 30, 251, 16));
        layoutWidget_27 = new QWidget(groupBox_11);
        layoutWidget_27->setObjectName(QStringLiteral("layoutWidget_27"));
        layoutWidget_27->setGeometry(QRect(40, 60, 221, 24));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_27);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_50 = new QLabel(layoutWidget_27);
        label_50->setObjectName(QStringLiteral("label_50"));

        horizontalLayout_18->addWidget(label_50);

        lineEdit_29 = new QLineEdit(layoutWidget_27);
        lineEdit_29->setObjectName(QStringLiteral("lineEdit_29"));

        horizontalLayout_18->addWidget(lineEdit_29);


        verticalLayout_28->addWidget(groupBox_11);

        pushButton_9 = new QPushButton(layoutWidget_26);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_28->addWidget(pushButton_9);

        label_51 = new QLabel(usun_mecz);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(90, 20, 241, 20));

        retranslateUi(usun_mecz);

        QMetaObject::connectSlotsByName(usun_mecz);
    } // setupUi

    void retranslateUi(QDialog *usun_mecz)
    {
        usun_mecz->setWindowTitle(QApplication::translate("usun_mecz", "Dialog", 0));
        groupBox_11->setTitle(QApplication::translate("usun_mecz", "Usuni\304\231cie meczu", 0));
        label_49->setText(QApplication::translate("usun_mecz", "Aby usun\304\205\304\207 mecz wprowad\305\272 has\305\202o", 0));
        label_50->setText(QApplication::translate("usun_mecz", "Has\305\202o", 0));
        pushButton_9->setText(QApplication::translate("usun_mecz", "Usu\305\204 mecz", 0));
        label_51->setText(QApplication::translate("usun_mecz", "nieprawdi\305\202owe has\305\202o", 0));
    } // retranslateUi

};

namespace Ui {
    class usun_mecz: public Ui_usun_mecz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUN_MECZ_H
