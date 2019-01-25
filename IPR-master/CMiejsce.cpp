///////////////////////////////////////////////////////////
//  CMiejsce.cpp
//  Implementation of the Class CMiejsce
//  Created on:      15-sty-2019 02:11:59
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CMiejsce.h"
#include "CRest.h"

CMiejsce::CMiejsce()
{

}

CMiejsce::CMiejsce(std::string nazwa_miejsca, std::string miasto,
                   std::string dyscyplina, float oplata)
{
    this->nazwa_miejsca = nazwa_miejsca;
    this->miasto = miasto;
    this->dyscypliny.push_back(dyscyplina);
    this->oplaty.push_back(oplata);
}

CMiejsce::~CMiejsce()
{

}

void CMiejsce::serializuj()
{
    this->json_do_wyslania = "";
    this->json_do_wyslania+="{\"nazwa miejsca\": \"";
    this->json_do_wyslania+=this->nazwa_miejsca;
    this->json_do_wyslania+="\", \"miasto\": \"";
    this->json_do_wyslania+=this->miasto;
    this->json_do_wyslania+="\", \"dyscypliny\": [\"";
    for (int i = 0; i < this->dyscypliny.size(); i++)
    {
        this->json_do_wyslania+=this->dyscypliny[i];
        if (i != this->dyscypliny.size()-1)
            this->json_do_wyslania+="\", \"";
        else
            this->json_do_wyslania+="\"";
    }
    this->json_do_wyslania+="], \"oplata\": [";
    for (int i = 0; i < this->oplaty.size(); i++)
    {
        this->json_do_wyslania+=std::to_string(this->oplaty[i]);
        if (i != this->dyscypliny.size()-1)
            this->json_do_wyslania+=", ";
        else
            this->json_do_wyslania+="";
    }
    this->json_do_wyslania+="]}";
}
void CMiejsce::wyslij_siebie()
{
    CRest::getRest().current_json = this->json_do_wyslania;
    std::string id = "";
    id += this->nazwa_miejsca;
    id += this->miasto;
    CRest::getRest().object_id = id;
}

Document CMiejsce::pobierz_dane(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().wez_json_i_przekaz(jsonname.c_str(), flag);
    if (flag)
        return d;
}

std::string CMiejsce::getName()
{
    return this->nazwa_miejsca;
}

std::string CMiejsce::getTown()
{
    return this->miasto;
}
