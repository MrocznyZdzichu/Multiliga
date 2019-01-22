/********************************************************************************
** Form generated from reading UI file 'druzyna_edytuj.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUZYNA_EDYTUJ_H
#define UI_DRUZYNA_EDYTUJ_H

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

class Ui_druzyna_edytuj
{
public:
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QVBoxLayout *verticalLayout_14;
    QComboBox *comboBox_5;
    QLineEdit *lineEdit_9;
    QComboBox *comboBox_6;
    QLineEdit *lineEdit_10;
    QGroupBox *groupBox_9;
    QListView *listView_3;
    QCommandLinkButton *commandLinkButton_6;
    QCommandLinkButton *commandLinkButton_7;
    QGroupBox *groupBox_10;
    QWidget *layoutWidget_12;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_28;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_6;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_29;
    QLineEdit *lineEdit_12;
    QPushButton *pushButton_7;
    QLabel *label_30;

    void setupUi(QDialog *druzyna_edytuj)
    {
        if (druzyna_edytuj->objectName().isEmpty())
            druzyna_edytuj->setObjectName(QStringLiteral("druzyna_edytuj"));
        druzyna_edytuj->resize(403, 638);
        layoutWidget_10 = new QWidget(druzyna_edytuj);
        layoutWidget_10->setObjectName(QStringLiteral("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(10, 30, 371, 521));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(layoutWidget_10);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        layoutWidget_11 = new QWidget(groupBox_8);
        layoutWidget_11->setObjectName(QStringLiteral("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(10, 20, 351, 142));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_24 = new QLabel(layoutWidget_11);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout_13->addWidget(label_24);

        label_25 = new QLabel(layoutWidget_11);
        label_25->setObjectName(QStringLiteral("label_25"));

        verticalLayout_13->addWidget(label_25);

        label_26 = new QLabel(layoutWidget_11);
        label_26->setObjectName(QStringLiteral("label_26"));

        verticalLayout_13->addWidget(label_26);

        label_27 = new QLabel(layoutWidget_11);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_13->addWidget(label_27);


        horizontalLayout_6->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        comboBox_5 = new QComboBox(layoutWidget_11);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        verticalLayout_14->addWidget(comboBox_5);

        lineEdit_9 = new QLineEdit(layoutWidget_11);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        verticalLayout_14->addWidget(lineEdit_9);

        comboBox_6 = new QComboBox(layoutWidget_11);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        verticalLayout_14->addWidget(comboBox_6);

        lineEdit_10 = new QLineEdit(layoutWidget_11);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        verticalLayout_14->addWidget(lineEdit_10);


        horizontalLayout_6->addLayout(verticalLayout_14);

        groupBox_9 = new QGroupBox(groupBox_8);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 170, 351, 271));
        listView_3 = new QListView(groupBox_9);
        listView_3->setObjectName(QStringLiteral("listView_3"));
        listView_3->setGeometry(QRect(10, 20, 331, 131));
        commandLinkButton_6 = new QCommandLinkButton(groupBox_9);
        commandLinkButton_6->setObjectName(QStringLiteral("commandLinkButton_6"));
        commandLinkButton_6->setGeometry(QRect(20, 20, 187, 41));
        commandLinkButton_7 = new QCommandLinkButton(groupBox_9);
        commandLinkButton_7->setObjectName(QStringLiteral("commandLinkButton_7"));
        commandLinkButton_7->setGeometry(QRect(180, 20, 161, 41));
        groupBox_10 = new QGroupBox(groupBox_9);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 160, 331, 101));
        layoutWidget_12 = new QWidget(groupBox_10);
        layoutWidget_12->setObjectName(QStringLiteral("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(10, 20, 311, 71));
        verticalLayout_15 = new QVBoxLayout(layoutWidget_12);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_28 = new QLabel(layoutWidget_12);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_7->addWidget(label_28);

        lineEdit_11 = new QLineEdit(layoutWidget_12);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        horizontalLayout_7->addWidget(lineEdit_11);


        verticalLayout_15->addLayout(horizontalLayout_7);

        pushButton_6 = new QPushButton(layoutWidget_12);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_15->addWidget(pushButton_6);

        layoutWidget_13 = new QWidget(groupBox_8);
        layoutWidget_13->setObjectName(QStringLiteral("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(10, 450, 341, 24));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget_13);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_8->addWidget(label_29);

        lineEdit_12 = new QLineEdit(layoutWidget_13);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        horizontalLayout_8->addWidget(lineEdit_12);


        verticalLayout_12->addWidget(groupBox_8);

        pushButton_7 = new QPushButton(layoutWidget_10);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_12->addWidget(pushButton_7);

        label_30 = new QLabel(druzyna_edytuj);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(30, 0, 331, 20));

        retranslateUi(druzyna_edytuj);

        QMetaObject::connectSlotsByName(druzyna_edytuj);
    } // setupUi

    void retranslateUi(QDialog *druzyna_edytuj)
    {
        druzyna_edytuj->setWindowTitle(QApplication::translate("druzyna_edytuj", "Dialog", 0));
        groupBox_8->setTitle(QApplication::translate("druzyna_edytuj", "Edytuj dru\305\274yn\304\231", 0));
        label_24->setText(QApplication::translate("druzyna_edytuj", "Dyscyplina", 0));
        label_25->setText(QApplication::translate("druzyna_edytuj", "Nazwa dru\305\274yny", 0));
        label_26->setText(QApplication::translate("druzyna_edytuj", "Dodaj do ligi", 0));
        label_27->setText(QApplication::translate("druzyna_edytuj", "Kapitan (email)", 0));
        groupBox_9->setTitle(QApplication::translate("druzyna_edytuj", "Zawodnicy", 0));
        commandLinkButton_6->setText(QApplication::translate("druzyna_edytuj", "Zawodnik X", 0));
        commandLinkButton_7->setText(QApplication::translate("druzyna_edytuj", "Usu\305\204 zawodnika", 0));
        groupBox_10->setTitle(QApplication::translate("druzyna_edytuj", "Dodaj zawodnika", 0));
        label_28->setText(QApplication::translate("druzyna_edytuj", "Email zawodnika", 0));
        lineEdit_11->setText(QString());
        pushButton_6->setText(QApplication::translate("druzyna_edytuj", "Dodaj", 0));
        label_29->setText(QApplication::translate("druzyna_edytuj", "Potwierd\305\272 has\305\202em", 0));
        pushButton_7->setText(QApplication::translate("druzyna_edytuj", "Edytuj dru\305\274yn\304\231", 0));
        label_30->setText(QApplication::translate("druzyna_edytuj", "nazwa si\304\231 powtarza / b\305\202\304\231dne has\305\202o / email nie istenieje", 0));
    } // retranslateUi

};

namespace Ui {
    class druzyna_edytuj: public Ui_druzyna_edytuj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUZYNA_EDYTUJ_H
