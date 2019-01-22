/********************************************************************************
** Form generated from reading UI file 'moje_druzyny.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOJE_DRUZYNY_H
#define UI_MOJE_DRUZYNY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_moje_druzyny
{
public:
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_2;
    QListView *listView_2;
    QCommandLinkButton *commandLinkButton_2;
    QGroupBox *groupBox;
    QListView *listView;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_4;

    void setupUi(QDialog *moje_druzyny)
    {
        if (moje_druzyny->objectName().isEmpty())
            moje_druzyny->setObjectName(QStringLiteral("moje_druzyny"));
        moje_druzyny->resize(392, 280);
        groupBox_3 = new QGroupBox(moje_druzyny);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 351, 251));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 90, 331, 121));
        listView_2 = new QListView(groupBox_2);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(10, 20, 311, 91));
        commandLinkButton_2 = new QCommandLinkButton(groupBox_2);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(10, 20, 231, 41));
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 331, 71));
        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 20, 311, 41));
        commandLinkButton = new QCommandLinkButton(groupBox);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 20, 231, 41));
        commandLinkButton_3 = new QCommandLinkButton(groupBox_3);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(80, 210, 187, 41));
        commandLinkButton_4 = new QCommandLinkButton(moje_druzyny);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(230, 50, 187, 41));

        retranslateUi(moje_druzyny);

        QMetaObject::connectSlotsByName(moje_druzyny);
    } // setupUi

    void retranslateUi(QDialog *moje_druzyny)
    {
        moje_druzyny->setWindowTitle(QApplication::translate("moje_druzyny", "Dialog", 0));
        groupBox_3->setTitle(QApplication::translate("moje_druzyny", "Moje dru\305\274yny", 0));
        groupBox_2->setTitle(QApplication::translate("moje_druzyny", "Dru\305\274yny", 0));
        commandLinkButton_2->setText(QApplication::translate("moje_druzyny", "Dru\305\274yna Y", 0));
        groupBox->setTitle(QApplication::translate("moje_druzyny", "Zaproszenia", 0));
        commandLinkButton->setText(QApplication::translate("moje_druzyny", "Zaproszenie do dru\305\274yny X", 0));
        commandLinkButton_3->setText(QApplication::translate("moje_druzyny", "Za\305\202\303\263\305\274 dru\305\274yn\304\231", 0));
        commandLinkButton_4->setText(QApplication::translate("moje_druzyny", "Akceptuj", 0));
    } // retranslateUi

};

namespace Ui {
    class moje_druzyny: public Ui_moje_druzyny {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOJE_DRUZYNY_H
