///////////////////////////////////////////////////////////
//  CListaDruzyn.cpp
//  Implementation of the Class CListaDruzyn
//  Created on:      15-sty-2019 02:11:56
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CListaDruzyn.h"

CListaDruzyn::CListaDruzyn()
{

}

CListaDruzyn::CListaDruzyn(std::string nazwaDruzyny, std::string nazwaLigi,
                           std::string nazwaMiasta, std::string nazwaDyscypliny)
{
    this->druzynaSzukana = new CDruzyna;
    this->druzynaSzukana->nazwa = nazwaDruzyny;

    this->druzynaSzukana->miasto = new CMiasto;
    this->druzynaSzukana->miasto->nazwaMiasta = nazwaMiasta;

    this->druzynaSzukana->dyscyplina = new CDyscyplina;
    this->druzynaSzukana->dyscyplina->nazwaDyscypliny = nazwaDyscypliny;

    this->druzynaSzukana->liga = new CLiga;
    this->druzynaSzukana->liga->nazwaLigi = nazwaLigi;
}

CListaDruzyn::~CListaDruzyn()
{

}

void CListaDruzyn::wyslij_siebie()
{
    CRest::getRest().current_json = this->JSonString;
}

void CListaDruzyn::serializuj()
{

}

Document CListaDruzyn::deserializuj(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().getJSonAndPass(jsonname.c_str(), flag);
    if (flag)
    return d;
}

void CListaDruzyn::serializujSzukane()
{
    this->JSonString = "";
    this->JSonString += this->druzynaSzukana->nazwa;
    this->JSonString += "_";
    this->JSonString += this->druzynaSzukana->dyscyplina->nazwaDyscypliny;
    this->JSonString += "_";
    this->JSonString += this->druzynaSzukana->liga->nazwaLigi;
    this->JSonString += "_";
    this->JSonString += this->druzynaSzukana->miasto->nazwaMiasta;
    this->JSonString += "_";
}

Document CListaDruzyn::deserializujSzukane(std::string jsonname)
{

}
std::vector<std::string> parseJS(std::string baseString);
void CListaDruzyn::wybierzDruzyny()
{
    std::string baseString = this->JSonString;
    std::vector<std::string> filtersy = parseJS(baseString);

    std::string nazwa1, dyscyplina1, liga1, miasto1;
    std::string nazwa2, dyscyplina2, liga2, miasto2;

    nazwa1 = filtersy[0];
    dyscyplina1 = filtersy[1];
    liga1 = filtersy[2];
    miasto1 = filtersy[3];

    int obecnyIndex = -1 ;
    for (auto& itr : this->listaDruzynDOM["listaDruzyn"].GetArray())
    {
        obecnyIndex++;
        nazwa2 = itr["nazwa"].GetString();
        dyscyplina2 = itr["dyscyplina"].GetString();
        liga2 = itr["liga"].GetString();
        miasto2 = itr["miasto"].GetString();

        if (nazwa2.find(nazwa1) != std::string::npos)
        {
            if (dyscyplina1 == dyscyplina2)
            {
                if (liga1 == liga2)
                {
                    if (miasto1 == miasto2)
                        this->indeksySzukanychDruzyn.push_back(obecnyIndex);
                }
            }
        }
    }
}

bool CListaDruzyn::lista_gotowa()
{
    if (indeksySzukanychDruzyn.size() != 0)
        return 1;
    else
        return 0;
}

std::vector<std::string> parseJS(std::string baseString)
{
    std::vector<std::string> output;
    std::string word;

    for (auto character : baseString)
    {
        if (character == '_')
        {
            output.push_back(word);
            word = "";
            continue;
        }
        else
        {
            word += character;
        }
    }
    return output;
}
