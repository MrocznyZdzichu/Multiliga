#include "logowanie.h"
#include "ui_logowanie.h"
#include "CUzytkownik.h"
#include "COpiekun.h"
#include "globalUser.h"
#include "CRest.h"
#include "strona_glowna_opiekun.h"
#include "rapidjson-master/rapidjson-master/include/rapidjson/document.h"
#include "rapidjson-master/rapidjson-master/include/rapidjson/filereadstream.h"

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
    std::string podany_mail = email.toStdString();
    std::string haslo = ui->lineEdit_2->text().toStdString();

    CUzytkownik* user = new CUzytkownik(podany_mail, haslo);
    user->wyslij_siebie();

    bool czyHasloPoprawne = false;
    std::string poziom_uprawnien = CRest::getRest().sprawdz_uzytkownika(czyHasloPoprawne);
    if (czyHasloPoprawne)
    {
        if (poziom_uprawnien == "opiekun")
        {
            delete this;
            return;
        }
    }
}
void logowanie::wrongEmail()
{
    ui->label_5->setText(QString::fromStdString("Wprowadzono błędny e-mail"));
}

void logowanie::dane_niepoprawne()
{
    this->ui->label_5->setText("Dane niepoprawne");
}
