/********************************************************************************
** Form generated from reading UI file 'edytuj_medcz.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDYTUJ_MEDCZ_H
#define UI_EDYTUJ_MEDCZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_edytuj_medcz
{
public:
    QWidget *layoutWidget_21;
    QVBoxLayout *verticalLayout_25;
    QGroupBox *groupBox_10;
    QWidget *layoutWidget_24;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_41;
    QLineEdit *lineEdit_22;
    QWidget *layoutWidget_25;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_48;
    QLabel *label_47;
    QVBoxLayout *verticalLayout_27;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_26;
    QLineEdit *lineEdit_28;
    QComboBox *comboBox;
    QLineEdit *lineEdit_27;
    QPushButton *pushButton_8;

    void setupUi(QDialog *edytuj_medcz)
    {
        if (edytuj_medcz->objectName().isEmpty())
            edytuj_medcz->setObjectName(QStringLiteral("edytuj_medcz"));
        edytuj_medcz->resize(356, 350);
        layoutWidget_21 = new QWidget(edytuj_medcz);
        layoutWidget_21->setObjectName(QStringLiteral("layoutWidget_21"));
        layoutWidget_21->setGeometry(QRect(20, 20, 301, 301));
        verticalLayout_25 = new QVBoxLayout(layoutWidget_21);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        groupBox_10 = new QGroupBox(layoutWidget_21);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        layoutWidget_24 = new QWidget(groupBox_10);
        layoutWidget_24->setObjectName(QStringLiteral("layoutWidget_24"));
        layoutWidget_24->setGeometry(QRect(50, 240, 221, 24));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_24);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_41 = new QLabel(layoutWidget_24);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_16->addWidget(label_41);

        lineEdit_22 = new QLineEdit(layoutWidget_24);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));

        horizontalLayout_16->addWidget(lineEdit_22);

        layoutWidget_25 = new QWidget(groupBox_10);
        layoutWidget_25->setObjectName(QStringLiteral("layoutWidget_25"));
        layoutWidget_25->setGeometry(QRect(10, 20, 281, 211));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_25);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        label_42 = new QLabel(layoutWidget_25);
        label_42->setObjectName(QStringLiteral("label_42"));

        verticalLayout_26->addWidget(label_42);

        label_43 = new QLabel(layoutWidget_25);
        label_43->setObjectName(QStringLiteral("label_43"));

        verticalLayout_26->addWidget(label_43);

        label_44 = new QLabel(layoutWidget_25);
        label_44->setObjectName(QStringLiteral("label_44"));

        verticalLayout_26->addWidget(label_44);

        label_45 = new QLabel(layoutWidget_25);
        label_45->setObjectName(QStringLiteral("label_45"));

        verticalLayout_26->addWidget(label_45);

        label_46 = new QLabel(layoutWidget_25);
        label_46->setObjectName(QStringLiteral("label_46"));

        verticalLayout_26->addWidget(label_46);

        label_48 = new QLabel(layoutWidget_25);
        label_48->setObjectName(QStringLiteral("label_48"));

        verticalLayout_26->addWidget(label_48);

        label_47 = new QLabel(layoutWidget_25);
        label_47->setObjectName(QStringLiteral("label_47"));

        verticalLayout_26->addWidget(label_47);


        horizontalLayout_17->addLayout(verticalLayout_26);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        lineEdit_23 = new QLineEdit(layoutWidget_25);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));

        verticalLayout_27->addWidget(lineEdit_23);

        lineEdit_24 = new QLineEdit(layoutWidget_25);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));

        verticalLayout_27->addWidget(lineEdit_24);

        lineEdit_25 = new QLineEdit(layoutWidget_25);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));

        verticalLayout_27->addWidget(lineEdit_25);

        lineEdit_26 = new QLineEdit(layoutWidget_25);
        lineEdit_26->setObjectName(QStringLiteral("lineEdit_26"));

        verticalLayout_27->addWidget(lineEdit_26);

        lineEdit_28 = new QLineEdit(layoutWidget_25);
        lineEdit_28->setObjectName(QStringLiteral("lineEdit_28"));

        verticalLayout_27->addWidget(lineEdit_28);

        comboBox = new QComboBox(layoutWidget_25);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_27->addWidget(comboBox);

        lineEdit_27 = new QLineEdit(layoutWidget_25);
        lineEdit_27->setObjectName(QStringLiteral("lineEdit_27"));

        verticalLayout_27->addWidget(lineEdit_27);


        horizontalLayout_17->addLayout(verticalLayout_27);


        verticalLayout_25->addWidget(groupBox_10);

        pushButton_8 = new QPushButton(layoutWidget_21);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_25->addWidget(pushButton_8);


        retranslateUi(edytuj_medcz);

        QMetaObject::connectSlotsByName(edytuj_medcz);
    } // setupUi

    void retranslateUi(QDialog *edytuj_medcz)
    {
        edytuj_medcz->setWindowTitle(QApplication::translate("edytuj_medcz", "Dialog", 0));
        groupBox_10->setTitle(QApplication::translate("edytuj_medcz", "Edytuj mecz", 0));
        label_41->setText(QApplication::translate("edytuj_medcz", "Has\305\202o", 0));
        label_42->setText(QApplication::translate("edytuj_medcz", "Pierwszy uczestnik", 0));
        label_43->setText(QApplication::translate("edytuj_medcz", "Drugi uczestnik", 0));
        label_44->setText(QApplication::translate("edytuj_medcz", "Data:", 0));
        label_45->setText(QApplication::translate("edytuj_medcz", "Miejsce:", 0));
        label_46->setText(QApplication::translate("edytuj_medcz", "S\304\231dzia: ", 0));
        label_48->setText(QApplication::translate("edytuj_medcz", "Rozegrano: ", 0));
        label_47->setText(QApplication::translate("edytuj_medcz", "Wynik:", 0));
        pushButton_8->setText(QApplication::translate("edytuj_medcz", "Edytuj", 0));
    } // retranslateUi

};

namespace Ui {
    class edytuj_medcz: public Ui_edytuj_medcz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDYTUJ_MEDCZ_H
