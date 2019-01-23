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
    this->JSonString = "";
    this->JSonString+="{\"nazwa miejsca\": \"";
    this->JSonString+=this->nazwa_miejsca;
    this->JSonString+="\", \"miasto\": \"";
    this->JSonString+=this->miasto;
    this->JSonString+="\", \"dyscypliny\": [\"";
    for (int i = 0; i < this->dyscypliny.size(); i++)
    {
        this->JSonString+=this->dyscypliny[i];
        if (i != this->dyscypliny.size()-1)
            this->JSonString+="\", \"";
        else
            this->JSonString+="\"";
    }
    this->JSonString+="], \"oplata\": [";
    for (int i = 0; i < this->oplaty.size(); i++)
    {
        this->JSonString+=std::to_string(this->oplaty[i]);
        if (i != this->dyscypliny.size()-1)
            this->JSonString+=", ";
        else
            this->JSonString+="";
    }
    this->JSonString+="]}";
}
void CMiejsce::wyslij_siebie()
{
    CRest::getRest().current_json = this->JSonString;
    std::string id = "";
    id += this->nazwa_miejsca;
    id += this->miasto;
    CRest::getRest().object_id = id;
}

Document CMiejsce::deserializuj(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().getJSonAndPass(jsonname.c_str(), flag);
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
