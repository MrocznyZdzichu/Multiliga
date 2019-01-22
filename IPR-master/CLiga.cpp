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

Document CLiga::deserializuj(std::string jsonname)
{
    bool flag;
    jsonname += ".json";
    Document d = CRest::getRest().getJSonAndPass(jsonname, flag);
    if (flag)
        return d;
    else
        return NULL;
}

void CLiga::serializuj()
{
    this->JSonString = "";
    this->JSonString += "{\"nazwa\": \"";
    this->JSonString += this->nazwaLigi;
    this->JSonString += "\", \"dyscyplina\": \"";
    this->JSonString += this->dyscyplinaLigi->nazwaDyscypliny;
    this->JSonString += "\", \"poziom ligi\": ";
    this->JSonString += std::to_string(this->poziomLigi);
    this->JSonString += ", \"sezon\": \"";
    this->JSonString += this->sezon;
    this->JSonString += "\", \"miasto\": \"";
    this->JSonString += this->miastoLigi->nazwaMiasta;
    this->JSonString += "\", \"organizator\": {\"email\": \"";
    this->JSonString += this->opiekunLigi->getEmail();
    this->JSonString += "\", \"imie\": \"";
    this->JSonString += this->opiekunLigi->getImie();
    this->JSonString += "\", \"nazwisko\": \"";
    this->JSonString += this->opiekunLigi->getNaziwsko();
    this->JSonString += "\"}, \"zasady\": {\"liczba kolejek\": ";
    this->JSonString += std::to_string(this->zasadyLigi->liczbaKolejek);
    this->JSonString += ", \"liczba meczy na kolejke\": ";
    this->JSonString += std::to_string(this->zasadyLigi->liczbaMeczy);
    this->JSonString += ", \"liczebnosc druzyn\": ";
    this->JSonString += std::to_string(this->zasadyLigi->liczebnoscDruzyn);
    this->JSonString += ", \"liczba podmeczy\": ";
    this->JSonString += std::to_string(this->zasadyLigi->liczbaPodmeczy);
    this->JSonString += ", \"czas trwania podmeczu\": ";
    this->JSonString += std::to_string(this->zasadyLigi->czasPodmeczu);
    this->JSonString += ", \"liczba punktow do zwyciestwa\": ";
    this->JSonString += std::to_string(this->zasadyLigi->limitPunktow);
    this->JSonString += "}}";

}

void CLiga::wyslij_siebie()
{
    CRest::getRest().current_json = this->JSonString;
    CRest::getRest().object_id = this->nazwaLigi;
}
