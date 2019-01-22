/********************************************************************************
** Form generated from reading UI file 'druzuna_dodaj.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUZUNA_DODAJ_H
#define UI_DRUZUNA_DODAJ_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_druzuna_dodaj
{
public:
    QLabel *label_8;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_6;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_6;
    QListView *listView_2;
    QCommandLinkButton *commandLinkButton_4;
    QCommandLinkButton *commandLinkButton_5;
    QGroupBox *groupBox_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_23;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_5;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_18;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_2;

    void setupUi(QDialog *druzuna_dodaj)
    {
        if (druzuna_dodaj->objectName().isEmpty())
            druzuna_dodaj->setObjectName(QStringLiteral("druzuna_dodaj"));
        druzuna_dodaj->resize(388, 571);
        label_8 = new QLabel(druzuna_dodaj);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 10, 331, 20));
        layoutWidget_4 = new QWidget(druzuna_dodaj);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 40, 371, 521));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(layoutWidget_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        layoutWidget_5 = new QWidget(groupBox_3);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 20, 351, 142));
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(layoutWidget_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        label_10 = new QLabel(layoutWidget_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);

        label_11 = new QLabel(layoutWidget_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_12 = new QLabel(layoutWidget_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_4->addWidget(label_12);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        comboBox = new QComboBox(layoutWidget_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_6->addWidget(comboBox);

        lineEdit = new QLineEdit(layoutWidget_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_6->addWidget(lineEdit);

        comboBox_2 = new QComboBox(layoutWidget_5);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout_6->addWidget(comboBox_2);

        lineEdit_2 = new QLineEdit(layoutWidget_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_6->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_6);

        groupBox_6 = new QGroupBox(groupBox_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 170, 351, 271));
        listView_2 = new QListView(groupBox_6);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(10, 20, 331, 131));
        commandLinkButton_4 = new QCommandLinkButton(groupBox_6);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(20, 20, 187, 41));
        commandLinkButton_5 = new QCommandLinkButton(groupBox_6);
        commandLinkButton_5->setObjectName(QStringLiteral("commandLinkButton_5"));
        commandLinkButton_5->setGeometry(QRect(180, 20, 161, 41));
        groupBox_7 = new QGroupBox(groupBox_6);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 160, 331, 101));
        widget = new QWidget(groupBox_7);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 311, 71));
        verticalLayout_11 = new QVBoxLayout(widget);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_23 = new QLabel(widget);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_5->addWidget(label_23);

        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_5->addWidget(lineEdit_8);


        verticalLayout_11->addLayout(horizontalLayout_5);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_11->addWidget(pushButton_5);

        widget1 = new QWidget(groupBox_3);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 450, 341, 24));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(widget1);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_4->addWidget(label_18);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_4->addWidget(lineEdit_5);


        verticalLayout_3->addWidget(groupBox_3);

        pushButton_2 = new QPushButton(layoutWidget_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);


        retranslateUi(druzuna_dodaj);

        QMetaObject::connectSlotsByName(druzuna_dodaj);
    } // setupUi

    void retranslateUi(QDialog *druzuna_dodaj)
    {
        druzuna_dodaj->setWindowTitle(QApplication::translate("druzuna_dodaj", "Dialog", 0));
        label_8->setText(QApplication::translate("druzuna_dodaj", "nazwa si\304\231 powtarza / b\305\202\304\231dne has\305\202o / email nie istenieje", 0));
        groupBox_3->setTitle(QApplication::translate("druzuna_dodaj", "Dodaj dru\305\274yn\304\231", 0));
        label_9->setText(QApplication::translate("druzuna_dodaj", "Dyscyplina", 0));
        label_10->setText(QApplication::translate("druzuna_dodaj", "Nazwa dru\305\274yny", 0));
        label_11->setText(QApplication::translate("druzuna_dodaj", "Dodaj do ligi", 0));
        label_12->setText(QApplication::translate("druzuna_dodaj", "Kapitan (email)", 0));
        groupBox_6->setTitle(QApplication::translate("druzuna_dodaj", "Zawodnicy", 0));
        commandLinkButton_4->setText(QApplication::translate("druzuna_dodaj", "Zawodnik X", 0));
        commandLinkButton_5->setText(QApplication::translate("druzuna_dodaj", "Usu\305\204 zawodnika", 0));
        groupBox_7->setTitle(QApplication::translate("druzuna_dodaj", "Dodaj zawodnika", 0));
        label_23->setText(QApplication::translate("druzuna_dodaj", "Email zawodnika", 0));
        lineEdit_8->setText(QString());
        pushButton_5->setText(QApplication::translate("druzuna_dodaj", "Dodaj", 0));
        label_18->setText(QApplication::translate("druzuna_dodaj", "Potwierd\305\272 has\305\202em", 0));
        pushButton_2->setText(QApplication::translate("druzuna_dodaj", "Dodaj dru\305\274yn\304\231", 0));
    } // retranslateUi

};

namespace Ui {
    class druzuna_dodaj: public Ui_druzuna_dodaj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUZUNA_DODAJ_H
