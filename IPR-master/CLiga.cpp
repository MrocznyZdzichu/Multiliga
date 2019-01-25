///////////////////////////////////////////////////////////
//  CLiga.cpp
//  Implementation of the Class CLiga
//  Created on:      15-sty-2019 02:11:56
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CLiga.h"


CLiga::CLiga()
{

}

CLiga::~CLiga()
{

}

Document CLiga::pobierz_dane(std::string jsonname)
{
    bool flag;
    jsonname += ".json";
    Document d = CRest::getRest().wez_json_i_przekaz(jsonname, flag);
    if (flag)
        return d;
    else
        return NULL;
}

void CLiga::serializuj()
{
    this->json_do_wyslania = "";
    this->json_do_wyslania += "{\"nazwa\": \"";
    this->json_do_wyslania += this->nazwaLigi;
    this->json_do_wyslania += "\", \"dyscyplina\": \"";
    this->json_do_wyslania += this->dyscyplinaLigi->nazwaDyscypliny;
    this->json_do_wyslania += "\", \"poziom ligi\": ";
    this->json_do_wyslania += std::to_string(this->poziomLigi);
    this->json_do_wyslania += ", \"sezon\": \"";
    this->json_do_wyslania += this->sezon;
    this->json_do_wyslania += "\", \"miasto\": \"";
    this->json_do_wyslania += this->miastoLigi->nazwaMiasta;
    this->json_do_wyslania += "\", \"organizator\": {\"email\": \"";
    this->json_do_wyslania += this->opiekunLigi->getEmail();
    this->json_do_wyslania += "\", \"imie\": \"";
    this->json_do_wyslania += this->opiekunLigi->getImie();
    this->json_do_wyslania += "\", \"nazwisko\": \"";
    this->json_do_wyslania += this->opiekunLigi->getNazwisko();
    this->json_do_wyslania += "\"}, \"zasady\": {\"liczba kolejek\": ";
    this->json_do_wyslania += std::to_string(this->zasadyLigi->liczbaKolejek);
    this->json_do_wyslania += ", \"liczba meczy na kolejke\": ";
    this->json_do_wyslania += std::to_string(this->zasadyLigi->liczbaMeczy);
    this->json_do_wyslania += ", \"liczebnosc druzyn\": ";
    this->json_do_wyslania += std::to_string(this->zasadyLigi->liczebnoscDruzyn);
    this->json_do_wyslania += ", \"liczba podmeczy\": ";
    this->json_do_wyslania += std::to_string(this->zasadyLigi->liczbaPodmeczy);
    this->json_do_wyslania += ", \"czas trwania podmeczu\": ";
    this->json_do_wyslania += std::to_string(this->zasadyLigi->czasPodmeczu);
    this->json_do_wyslania += ", \"liczba punktow do zwyciestwa\": ";
    this->json_do_wyslania += std::to_string(this->zasadyLigi->limitPunktow);
    this->json_do_wyslania += "}}";

}

void CLiga::wyslij_siebie()
{
    CRest::getRest().current_json = this->json_do_wyslania;
    CRest::getRest().object_id = this->nazwaLigi;
}
