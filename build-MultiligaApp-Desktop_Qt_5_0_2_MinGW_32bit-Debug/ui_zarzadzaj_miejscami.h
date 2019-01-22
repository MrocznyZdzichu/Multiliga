/********************************************************************************
** Form generated from reading UI file 'zarzadzaj_miejscami.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZARZADZAJ_MIEJSCAMI_H
#define UI_ZARZADZAJ_MIEJSCAMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zarzadzaj_miejscami
{
public:
    QGroupBox *groupBox;
    QCommandLinkButton *commandLinkButton;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *zarzadzaj_miejscami)
    {
        if (zarzadzaj_miejscami->objectName().isEmpty())
            zarzadzaj_miejscami->setObjectName(QStringLiteral("zarzadzaj_miejscami"));
        zarzadzaj_miejscami->resize(402, 343);
        groupBox = new QGroupBox(zarzadzaj_miejscami);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 361, 311));
        commandLinkButton = new QCommandLinkButton(groupBox);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(70, 260, 229, 31));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 70, 181, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 70, 101, 23));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 160, 131, 23));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 160, 141, 23));
        layoutWidget = new QWidget(zarzadzaj_miejscami);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 2, 2));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        layoutWidget_2 = new QWidget(zarzadzaj_miejscami);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 2, 2));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget_3 = new QWidget(zarzadzaj_miejscami);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 2, 2));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        retranslateUi(zarzadzaj_miejscami);

        QMetaObject::connectSlotsByName(zarzadzaj_miejscami);
    } // setupUi

    void retranslateUi(QDialog *zarzadzaj_miejscami)
    {
        zarzadzaj_miejscami->setWindowTitle(QApplication::translate("zarzadzaj_miejscami", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("zarzadzaj_miejscami", "Moje miejsca", 0));
        commandLinkButton->setText(QApplication::translate("zarzadzaj_miejscami", "Utw\303\263rz nowe miejsce", 0));
        pushButton->setText(QApplication::translate("zarzadzaj_miejscami", "Poka\305\274", 0));
        pushButton_2->setText(QApplication::translate("zarzadzaj_miejscami", "Usu\305\204", 0));
        pushButton_3->setText(QApplication::translate("zarzadzaj_miejscami", "Edytuj", 0));
    } // retranslateUi

};

namespace Ui {
    class zarzadzaj_miejscami: public Ui_zarzadzaj_miejscami {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZARZADZAJ_MIEJSCAMI_H
