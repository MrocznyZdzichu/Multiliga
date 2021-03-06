///////////////////////////////////////////////////////////
//  CUzytkownik.cpp
//  Implementation of the Class CUzytkownik
//  Created on:      15-sty-2019 02:12:01
//  Original author: Myles
///////////////////////////////////////////////////////////
#include <CRest.h>
#include "CUzytkownik.h"

CUzytkownik::CUzytkownik()
{

}
CUzytkownik::CUzytkownik(std::string email, std::string password)
{
    this->email = email;
    this->haslo = password;
}

CUzytkownik::CUzytkownik(std::string fieldValues[])
{
    this->imie = fieldValues[0];
    this->nazwisko = fieldValues[1];
    this->email = fieldValues[2];
    this->haslo = fieldValues[3];
}

CUzytkownik::~CUzytkownik()
{

}
rapidjson::Document CUzytkownik::pobierz_dane(std::string jsonname)
{

}
void CUzytkownik::serializuj()
{
    this->json_do_wyslania ="{\"email\": \"";
    this->json_do_wyslania += this->email;
    this->json_do_wyslania += "\", \"imie\": \"";
    this->json_do_wyslania += this->imie;
    this->json_do_wyslania += "\", \"nazwisko\": \"";
    this->json_do_wyslania += this->nazwisko;
    this->json_do_wyslania += "\", \"haslo\": \"";
    this->json_do_wyslania += this->haslo;
    this->json_do_wyslania += "\", \"level\": \"\"}";
}
void CUzytkownik::wyslij_siebie()
{
    CRest::getRest().zalogowany_uzytkownik = this;
}

bool CUzytkownik::sprawdz_haslo(std::string providedPwd)
{
    if (providedPwd == this->getPwd())
        return 1;
    else
        return 0;
}

bool CUzytkownik::zmiana_status()
{

    return  NULL;
}


bool CUzytkownik::zmien_email(std::string n_email, std::string haslo){

    return  NULL;
}


void CUzytkownik::zmien_haslo(std::string haslo, std::string n_haslo)
{

}

std::string CUzytkownik::getEmail()
{
    return this->email;
}
std::string CUzytkownik::getPwd()
{
    return this->haslo;
}

std::string CUzytkownik::getImie()
{
    return this->imie;
}

std::string CUzytkownik::getNazwisko()
{
    return this->nazwisko;
}

void CUzytkownik::setImie(std::string imie)
{
    this->imie = imie;
}
void CUzytkownik::setNazwisko(std::string nazwisko)
{
    this->nazwisko = nazwisko;
}

void CUzytkownik::setEmail(std::string email)
{
    this->email = email;
}

void CUzytkownik::setPwd(std::string pwd)
{
    this->haslo = pwd;
}

std::string CUzytkownik::shortenMail(std::string originMail)
{
    std::string dotCropMail = "";
    for (int i = 0; i < originMail.size(); i++)
    {
        if (originMail[i] == '.')
            dotCropMail+="_";
        else
            dotCropMail+=originMail[i];
    }
    dotCropMail+=".json";
    return dotCropMail;
}
