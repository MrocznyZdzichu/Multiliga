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
    CRest::getRest().current_json = this->json_do_wyslania;
}

void CListaDruzyn::serializuj()
{

}

Document CListaDruzyn::pobierz_dane(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().wez_json_i_przekaz(jsonname.c_str(), flag);
    if (flag)
    return d;
}

void CListaDruzyn::serializuj_szukane()
{
    this->json_do_wyslania = "";
    this->json_do_wyslania += this->druzynaSzukana->nazwa;
    this->json_do_wyslania += "_";
    this->json_do_wyslania += this->druzynaSzukana->dyscyplina->nazwaDyscypliny;
    this->json_do_wyslania += "_";
    this->json_do_wyslania += this->druzynaSzukana->liga->nazwaLigi;
    this->json_do_wyslania += "_";
    this->json_do_wyslania += this->druzynaSzukana->miasto->nazwaMiasta;
    this->json_do_wyslania += "_";
}

Document CListaDruzyn::deserializujSzukane(std::string jsonname)
{

}
std::vector<std::string> parseJS(std::string baseString);
void CListaDruzyn::wybierzDruzyny()
{
    std::string baseString = this->json_do_wyslania;
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

CDruzyna* CListaDruzyn::zwroc_druzyne(std::string nazwa_druzyny)
{
    CDruzyna* wyswietlana_druzyna = new CDruzyna;
    for (auto& druzyna : this->listaDruzynDOM["listaDruzyn"].GetArray())
    {
        if (druzyna["nazwa"].GetString() == nazwa_druzyny)
        {
            wyswietlana_druzyna->nazwa = druzyna["nazwa"].GetString();
            wyswietlana_druzyna->dyscyplina->nazwaDyscypliny = druzyna["dyscyplina"].GetString();
            for (auto& gracze : druzyna["gracze"].GetArray())
            {
                std::string imie = "";
                std::string nazwisko = "";
                bool czy_spacja_juz_byla = 0;
                std::string temp = gracze.GetString();
                char character;
                for (int i = 0; i < temp.size(); i++)
                {
                    character = temp[i];
                    if (character == ' ')
                    {
                        czy_spacja_juz_byla = true;
                        continue;
                    }
                    if (!czy_spacja_juz_byla)
                        imie += character;
                    else
                        nazwisko += character;
                }
                CGracz* czlonek_druzyny = new CGracz;
                czlonek_druzyny->setImie(imie);
                czlonek_druzyny->setNazwisko(nazwisko);
                wyswietlana_druzyna->graczeDruzyny.push_back(czlonek_druzyny);
            }
            wyswietlana_druzyna->liga->nazwaLigi = druzyna["liga"].GetString();
            wyswietlana_druzyna->miasto->nazwaMiasta = druzyna["miasto"].GetString();
            wyswietlana_druzyna->opis = druzyna["opis"].GetString();
            wyswietlana_druzyna->poprzednia_liga->nazwaLigi = druzyna["poprzednia liga"].GetString();
            wyswietlana_druzyna->osiagniecia = druzyna["osiagniecia"].GetString();
        }
    }
    return wyswietlana_druzyna;
}
