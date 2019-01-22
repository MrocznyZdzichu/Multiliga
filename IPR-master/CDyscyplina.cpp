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

CDyscyplina::~CDyscyplina()
{

}

void CDyscyplina::serializuj()
{
    this->JSonString = "\"";
    this->JSonString += this->nazwaDyscypliny;
    this->JSonString += "\"";
}

Document CDyscyplina::deserializuj(std::string jsonname)
{

}

void CDyscyplina::wyslij_siebie()
{
    CRest::getRest().current_json = this->JSonString;
}
