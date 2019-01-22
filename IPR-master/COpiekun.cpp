///////////////////////////////////////////////////////////
//  COpiekun.cpp
//  Implementation of the Class COpiekun
//  Created on:      15-sty-2019 02:12:00
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "COpiekun.h"


COpiekun::COpiekun()
{

}



COpiekun::~COpiekun()
{

}

COpiekun::COpiekun(std::string imie, std::string nazwisko, std::string email, std::string haslo)
{
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->email = email;
    this->haslo = haslo;
}

Document COpiekun::deserializuj(std::string jsonname)
{

}

void COpiekun::serializuj()
{

}

void COpiekun::wyslij_siebie()
{

}
