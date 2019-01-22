/********************************************************************************
** Form generated from reading UI file 'moje_ligi_gracz.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOJE_LIGI_GRACZ_H
#define UI_MOJE_LIGI_GRACZ_H

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

class Ui_moje_ligi_gracz
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

    void setupUi(QDialog *moje_ligi_gracz)
    {
        if (moje_ligi_gracz->objectName().isEmpty())
            moje_ligi_gracz->setObjectName(QStringLiteral("moje_ligi_gracz"));
        moje_ligi_gracz->resize(371, 264);
        groupBox_3 = new QGroupBox(moje_ligi_gracz);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 351, 231));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 90, 331, 131));
        listView_2 = new QListView(groupBox_2);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(10, 20, 311, 101));
        commandLinkButton_2 = new QCommandLinkButton(groupBox_2);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(20, 20, 187, 41));
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 331, 71));
        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 20, 311, 41));
        commandLinkButton = new QCommandLinkButton(groupBox);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 20, 187, 41));
        commandLinkButton_3 = new QCommandLinkButton(groupBox);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(190, 20, 172, 40));

        retranslateUi(moje_ligi_gracz);

        QMetaObject::connectSlotsByName(moje_ligi_gracz);
    } // setupUi

    void retranslateUi(QDialog *moje_ligi_gracz)
    {
        moje_ligi_gracz->setWindowTitle(QApplication::translate("moje_ligi_gracz", "Dialog", 0));
        groupBox_3->setTitle(QApplication::translate("moje_ligi_gracz", "Moje ligi", 0));
        groupBox_2->setTitle(QApplication::translate("moje_ligi_gracz", "Ligi", 0));
        commandLinkButton_2->setText(QApplication::translate("moje_ligi_gracz", "Liga Y", 0));
        groupBox->setTitle(QApplication::translate("moje_ligi_gracz", "Zaproszenia", 0));
        commandLinkButton->setText(QApplication::translate("moje_ligi_gracz", "Zaproszenie do ligi X", 0));
        commandLinkButton_3->setText(QApplication::translate("moje_ligi_gracz", "Akceptuj", 0));
    } // retranslateUi

};

namespace Ui {
    class moje_ligi_gracz: public Ui_moje_ligi_gracz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOJE_LIGI_GRACZ_H
