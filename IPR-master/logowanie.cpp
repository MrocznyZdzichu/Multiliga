#include "logowanie.h"
#include "ui_logowanie.h"
#include "CUzytkownik.h"
#include "COpiekun.h"
#include "globalUser.h"
#include "rapidjson-master/rapidjson-master/include/rapidjson/document.h"
#include "rapidjson-master/rapidjson-master/include/rapidjson/filereadstream.h"
#include "rapidjson-master/rapidjson-master/include/rapidjson/document.h"
#include "CRest.h"
using namespace rapidjson;
logowanie::logowanie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::logowanie)
{
    ui->setupUi(this);
    connect(&CRest::getRest(), SIGNAL(wrongLogin()), this, SLOT(wrongEmail()));
}

logowanie::~logowanie()
{
    delete ui;
}

std::string shortenMail(std::string originMail);

void logowanie::on_pushButton_clicked()
{
    QString email = ui->lineEdit->text();
    std::string queryEmail = email.toStdString();
    QString haslo = ui->lineEdit_2->text();
    std::string queryHaslo = haslo.toStdString();

    CUzytkownik* user = new CUzytkownik(queryEmail, queryHaslo);
    user->wyslij_siebie();

    bool fileExist;
    CRest::getRest().getJSon(fileExist);
    if (!fileExist)
        return;

    bool isPwdValid = CRest::getRest().sprawdz_haslo(queryHaslo);
    switch (isPwdValid)
    {
    case 0:
        ui->label_5->setText(QString::fromStdString("Wprowadzono błędne hasło"));
        break;
    case 1:
        std::string poziom_uprawnien = CRest::getRest().sprawdz_uprawnienia();
        if (poziom_uprawnien == "opiekun")
        {
            CRest::getRest().logInOpiekun();
            this->destroy();
            emit destroyed();
        }
        break;
    }
}
void logowanie::wrongEmail()
{
    ui->label_5->setText(QString::fromStdString("Wprowadzono błędny e-mail"));
}
