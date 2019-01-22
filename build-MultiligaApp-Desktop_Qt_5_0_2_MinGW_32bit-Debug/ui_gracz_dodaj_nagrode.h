/********************************************************************************
** Form generated from reading UI file 'gracz_dodaj_nagrode.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRACZ_DODAJ_NAGRODE_H
#define UI_GRACZ_DODAJ_NAGRODE_H

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

class Ui_gracz_dodaj_nagrode
{
public:
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *gracz_dodaj_nagrode)
    {
        if (gracz_dodaj_nagrode->objectName().isEmpty())
            gracz_dodaj_nagrode->setObjectName(QStringLiteral("gracz_dodaj_nagrode"));
        gracz_dodaj_nagrode->resize(305, 219);
        label_4 = new QLabel(gracz_dodaj_nagrode);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 10, 141, 22));
        widget = new QWidget(gracz_dodaj_nagrode);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 40, 281, 151));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 30, 252, 84));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        retranslateUi(gracz_dodaj_nagrode);

        QMetaObject::connectSlotsByName(gracz_dodaj_nagrode);
    } // setupUi

    void retranslateUi(QDialog *gracz_dodaj_nagrode)
    {
        gracz_dodaj_nagrode->setWindowTitle(QApplication::translate("gracz_dodaj_nagrode", "Dialog", 0));
        label_4->setText(QApplication::translate("gracz_dodaj_nagrode", "nieprawid\305\202owe has\305\202o", 0));
        groupBox->setTitle(QApplication::translate("gracz_dodaj_nagrode", "Dodaj nagrode", 0));
        label_2->setText(QApplication::translate("gracz_dodaj_nagrode", "Nazwa nagrody", 0));
        label->setText(QApplication::translate("gracz_dodaj_nagrode", "Opis nagrody", 0));
        label_3->setText(QApplication::translate("gracz_dodaj_nagrode", "Potwierd\305\272 has\305\202em", 0));
        pushButton->setText(QApplication::translate("gracz_dodaj_nagrode", "Dodaj", 0));
    } // retranslateUi

};

namespace Ui {
    class gracz_dodaj_nagrode: public Ui_gracz_dodaj_nagrode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRACZ_DODAJ_NAGRODE_H
