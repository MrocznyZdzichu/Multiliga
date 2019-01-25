///////////////////////////////////////////////////////////
//  CDyscyplina.cpp
//  Implementation of the Class CDyscyplina
//  Created on:      15-sty-2019 02:11:55
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CDyscyplina.h"


CDyscyplina::CDyscyplina()
{

}

CDyscyplina::CDyscyplina(std::string nazwa_dyscypliny)
{
    this->nazwaDyscypliny = nazwa_dyscypliny;
}

CDyscyplina::~CDyscyplina()
{

}

void CDyscyplina::serializuj()
{
    this->json_do_wyslania = "\"";
    this->json_do_wyslania += this->nazwaDyscypliny;
    this->json_do_wyslania += "\"";
}

Document CDyscyplina::pobierz_dane(std::string jsonname)
{

}

void CDyscyplina::wyslij_siebie()
{
    CRest::getRest().current_json = this->json_do_wyslania;
}
