/********************************************************************************
** Form generated from reading UI file 'przypomnienie_hasla.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRZYPOMNIENIE_HASLA_H
#define UI_PRZYPOMNIENIE_HASLA_H

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

class Ui_przypomnienie_hasla
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *przypomnienie_hasla)
    {
        if (przypomnienie_hasla->objectName().isEmpty())
            przypomnienie_hasla->setObjectName(QStringLiteral("przypomnienie_hasla"));
        przypomnienie_hasla->resize(360, 249);
        layoutWidget = new QWidget(przypomnienie_hasla);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 70, 251, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 40, 211, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_2->addWidget(groupBox);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        label_2 = new QLabel(przypomnienie_hasla);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(74, 30, 271, 20));

        retranslateUi(przypomnienie_hasla);

        QMetaObject::connectSlotsByName(przypomnienie_hasla);
    } // setupUi

    void retranslateUi(QDialog *przypomnienie_hasla)
    {
        przypomnienie_hasla->setWindowTitle(QApplication::translate("przypomnienie_hasla", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("przypomnienie_hasla", "Przypomnienie has\305\202a", 0));
        label->setText(QApplication::translate("przypomnienie_hasla", "Email", 0));
        pushButton->setText(QApplication::translate("przypomnienie_hasla", "Wy\305\233lij email z przypomnieniem", 0));
        label_2->setText(QApplication::translate("przypomnienie_hasla", "komunikat o nieistniej\304\205cym emailu", 0));
    } // retranslateUi

};

namespace Ui {
    class przypomnienie_hasla: public Ui_przypomnienie_hasla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRZYPOMNIENIE_HASLA_H
