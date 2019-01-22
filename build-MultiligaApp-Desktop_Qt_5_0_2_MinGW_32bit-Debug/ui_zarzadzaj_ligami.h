/********************************************************************************
** Form generated from reading UI file 'zarzadzaj_ligami.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZARZADZAJ_LIGAMI_H
#define UI_ZARZADZAJ_LIGAMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zarzadzaj_ligami
{
public:
    QGroupBox *groupBox;
    QCommandLinkButton *commandLinkButton;
    QComboBox *comboBox;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;

    void setupUi(QDialog *zarzadzaj_ligami)
    {
        if (zarzadzaj_ligami->objectName().isEmpty())
            zarzadzaj_ligami->setObjectName(QStringLiteral("zarzadzaj_ligami"));
        zarzadzaj_ligami->resize(384, 363);
        groupBox = new QGroupBox(zarzadzaj_ligami);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 361, 311));
        commandLinkButton = new QCommandLinkButton(groupBox);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(90, 260, 229, 31));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 60, 161, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 60, 46, 21));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 170, 341, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        layoutWidget = new QWidget(zarzadzaj_ligami);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(zarzadzaj_ligami);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        layoutWidget2 = new QWidget(zarzadzaj_ligami);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(zarzadzaj_ligami);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 10, 141, 20));

        retranslateUi(zarzadzaj_ligami);

        QMetaObject::connectSlotsByName(zarzadzaj_ligami);
    } // setupUi

    void retranslateUi(QDialog *zarzadzaj_ligami)
    {
        zarzadzaj_ligami->setWindowTitle(QApplication::translate("zarzadzaj_ligami", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("zarzadzaj_ligami", "Moje ligi", 0));
        commandLinkButton->setText(QApplication::translate("zarzadzaj_ligami", "Utw\303\263rz now\304\205 lig\304\231", 0));
        label->setText(QApplication::translate("zarzadzaj_ligami", "Nazwa ligi", 0));
        pushButton_3->setText(QApplication::translate("zarzadzaj_ligami", "Wy\305\233wietl", 0));
        pushButton->setText(QApplication::translate("zarzadzaj_ligami", "Edytuj", 0));
        pushButton_2->setText(QApplication::translate("zarzadzaj_ligami", "Usu\305\204", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zarzadzaj_ligami: public Ui_zarzadzaj_ligami {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZARZADZAJ_LIGAMI_H
