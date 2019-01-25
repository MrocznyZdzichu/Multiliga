///////////////////////////////////////////////////////////
//  CZaproszenieLiga.cpp
//  Implementation of the Class CZaproszenieLiga
//  Created on:      15-sty-2019 02:12:03
//  Original author: Myles
///////////////////////////////////////////////////////////
#include "CLiga.h"
#include "CDruzyna.h"
#include "CZaproszenieLiga.h"


CZaproszenieLiga::CZaproszenieLiga(std::string nazwa_druzyny, std::string nazwa_ligi)
{
    this->data_utworzenia = QDateTime::currentDateTime();
    this->nazwa_druzyny = nazwa_druzyny;
    this->nazwa_ligi = nazwa_ligi;
}

CZaproszenieLiga::~CZaproszenieLiga()
{

}

void CZaproszenieLiga::serializuj()
{
    this->json_do_wyslania ="{\"nazwa druzyny\": \"";
    this->json_do_wyslania += this->nazwa_druzyny;
    this->json_do_wyslania += "\", \"nazwa ligi\": \"";
    this->json_do_wyslania += this->nazwa_ligi;
    this->json_do_wyslania += "\", \"data zaproszenia\": \"";
    std::string data_string = this->data_utworzenia.toString().toStdString();
    this->json_do_wyslania += data_string;
    this->json_do_wyslania += "\"}";
}

void CZaproszenieLiga::wyslij_siebie()
{
    CRest::getRest().current_json = json_do_wyslania;
    std::string id = "";
    id += this->nazwa_druzyny;
    id += this->nazwa_ligi;
    CRest::getRest().object_id = id;
}

Document CZaproszenieLiga::pobierz_dane(std::string jsonname)
{

}
