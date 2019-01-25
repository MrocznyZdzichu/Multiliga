///////////////////////////////////////////////////////////
//  CRest.cpp
//  Implementation of the Class CRest
//  Created on:      15-sty-2019 02:12:01
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CRest.h"

#include "CListaDruzyn.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include "rapidjson-master/rapidjson-master/include/rapidjson/pointer.h"
#include "globalUser.h"
#include "COpiekun.h"
using namespace rapidjson;

CRest::CRest()
{

}
CRest::~CRest(){


}
std::string shortenMail(std::string originMail);

void CRest::getJSon(bool& fileExist)
{
    std::fstream fileChecker;
    fileChecker.open(this->podany_mail.c_str(), std::ios_base::in);

    if (!fileChecker.is_open())
    {
        emit wrongLogin();
        fileExist = 0;
        return;
    }
    fileExist = 1;

    FILE* fp = fopen(this->podany_mail.c_str(), "rb");
    char readBuffer[65536];
    FileReadStream is(fp, readBuffer, sizeof(readBuffer));
    this->object0JSon.ParseStream(is);
    fclose(fp);
}

void CRest::getJSon(std::string filename, bool& fileExist)
{
    std::fstream fileChecker;
    fileChecker.open(filename.c_str(), std::ios_base::in);

    if (!fileChecker.is_open())
    {
        //emit wrongLogin();
        fileExist = 0;
        return;
    }
    fileExist = 1;

    FILE* fp = fopen(filename.c_str(), "rb");
    char readBuffer[65536];
    FileReadStream is(fp, readBuffer, sizeof(readBuffer));
    this->object0JSon.ParseStream(is);
    fclose(fp);
    return;
}
Document CRest::wez_json_i_przekaz(std::string filename, bool& fileExist)
{
    std::fstream fileChecker;
    fileChecker.open(filename.c_str(), std::ios_base::in);

    if (!fileChecker.is_open())
    {
        emit wrongLogin();
        fileExist = 0;
        return NULL;
    }
    fileExist = 1;

    Document DOM;
    FILE* fp = fopen(filename.c_str(), "rb");
    char readBuffer[65536];
    FileReadStream is(fp, readBuffer, sizeof(readBuffer));
    DOM.ParseStream(is);
    fclose(fp);
    return DOM;
}

std::string CRest::sprawdz_uprawnienia()
{
    return this->object0JSon["level"].GetString();
}

bool CRest::sprawdz_unikalnosc(std::string unikalneID)
{
    std::string fileName = unikalneID + ".json";
    std::fstream plik;
    plik.open(fileName.c_str(), std::ios_base::in);

    if (plik.is_open())
        return 0;
    else
        return 1;
    plik.close();
}

void CRest::logInOpiekun()
{
    this->zalogowany_uzytkownik = new COpiekun (this->object0JSon["imie"].GetString(), this->object0JSon["nazwisko"].GetString(),
                                      this->object0JSon["email"].GetString(), this->object0JSon["haslo"].GetString());
}

void CRest::dodaj_miejsce_rozgrywki()
{   
    std::fstream listamiejsc;
    listamiejsc.open("listamiejsc.json", std::ios_base::out | std::ios_base::in);

    if (listamiejsc.is_open())
    {
        this->dodaj_do_listy_miejsc(listamiejsc);
    }
    else
    {
        emit fileNotFound("Nie znaleziono listy miejsc rozgrywek");
        return;
    }

    std::string fileName = "";
    fileName += this->object_id;
    fileName += ".json";
    std::fstream plik_z_miejscem;
    plik_z_miejscem.open(fileName.c_str(), std::ios_base::out);

    if (plik_z_miejscem.is_open())
    {
        this->dodaj_plik_z_miejscem(plik_z_miejscem);
    }
    else
    {
        emit fileNotFound("Nie udało się zapisać nowego miejsca rozgrywek");
        return;
    }

    QString addSuccessfully = QString("Dodano nowe miejsce rozgrywek");
    emit aktualizuj_zarzadzaj_miejscami();
    return;
}
void CRest::dodaj_do_listy_miejsc (std::fstream& listamiejsc)
{
    char previous = 'a';
    char current = 'a';
    while (true)
    {
        listamiejsc.get(current);

        if (previous == '}' && current != ',')
        {
            listamiejsc.seekp(-3, std::ios_base::cur);
            listamiejsc << ',' << "\n" <<"\t\t\t\t\t\t" << this->current_json.c_str() << "\n" << "\t\t\t\t\t" << ']' <<"\n" << '}';
            listamiejsc.close();
            return;
        }
        else
        {
            previous = current;
        }
    }
}

void CRest::dodaj_plik_z_miejscem(std::fstream &plik_z_miejscem)
{
    plik_z_miejscem << this->current_json;
    plik_z_miejscem.close();
}

bool CRest::sprawdz_haslo(std::string providedPwd)
{
    if (this->zalogowany_uzytkownik != NULL)
    {
        if (providedPwd == this->zalogowany_uzytkownik->getPwd())
            return 1;
        else
        {
            emit wrongPassword("Wprowadzono błędne hasło");
            return 0;
        }
    }
    else
    {
        if (this->podane_haslo == this->object0JSon["haslo"].GetString())
        {
            return 1;
        }
        else
        {
            emit wrongPassword("Wprowadzono błędne hasło");
            return 0;
        }
    }
}

void CRest::dodaj_lige()
{
    std::fstream listamiejsc;
    listamiejsc.open("listaLig.json", std::ios_base::out | std::ios_base::in);

    if (listamiejsc.is_open())
    {
        this->dodaj_do_listy_lig(listamiejsc);
    }
    else
    {
        return;
    }

    std::string fileName;
    fileName += this->object_id;
    fileName += ".json";
    std::fstream plik_z_miejscem;
    plik_z_miejscem.open(fileName.c_str(), std::ios_base::out);

    if (plik_z_miejscem.is_open())
    {
        this->dodaj_plik_z_liga(plik_z_miejscem);
    }
    emit aktualizuj_ligi();
    return;
}

void CRest::dodaj_do_listy_lig(std::fstream &listalig)
{
    char previous2 = 'a';
    char previous = 'a';
    char current = 'a';
    while (true)
    {
        listalig.get(current);

        if (previous2 == '}' && previous == '}' && current != ',')
        {
            listalig.seekp(-3, std::ios_base::cur);
            listalig << ',' << "\n" <<"\t\t\t\t\t" << this->current_json.c_str() << "\n" << "\t\t\t\t" << ']' <<"\n" << '}';
            listalig.close();
            return;
        }
        else
        {
            previous2 = previous;
            previous = current;
        }
    }
}

void CRest::dodaj_plik_z_liga(std::fstream &plik_z_liga)
{
    plik_z_liga << this->current_json;
    plik_z_liga.close();
}

void CRest::dodaj_dyscypline()
{
    std::fstream dyscypliny;
    dyscypliny.open("listadyscyplin.json", std::ios_base::out | std::ios_base::in);

    if (dyscypliny.is_open())
    {
        char previous = 'a';
        char current = 'a';
        while (true)
        {
            dyscypliny.get(current);

            if (previous == '\"' && current == ']')
            {
                dyscypliny.seekp(-2, std::ios_base::cur);
                dyscypliny << ", " << this->current_json << ']' << "\n}";
                dyscypliny.close();
                return;
            }
            else
            {
                previous = current;
            }
        }
    }
    else
    {
        emit fileNotFound("Nie znaleziono listy dyscyplin");
        return;
    }
}

void CRest::dodaj_oplate()
{
    std::fstream oplaty;
    oplaty.open("oplaty.json", std::ios_base::out | std::ios_base::in);

    if (oplaty.is_open())
    {
        char previous = 'a';
        char current = 'a';
        while (true)
        {
            oplaty.get(current);

            if (previous == '\"' && current == ']')
            {
                oplaty.seekp(-2, std::ios_base::cur);
                oplaty << ", " << this->current_json << ']' << "\n}";
                oplaty.close();
                return;
            }
            else
            {
                previous = current;
            }
        }
    }
    else
    {
        emit fileNotFound("Nie znaleziono listy oplat");
        return;
    }
}

Document CRest::odbierz_druzyny()
{
    CListaDruzyn* temp = new CListaDruzyn;
    return temp->pobierz_dane("listaDruzyn.json");
}

std::string CRest::sprawdz_uzytkownika(bool& czyHasloPoprawne)
{
    std::string fileName = this->zalogowany_uzytkownik->getEmail();
    for (int i = 0; i < fileName.size(); i++)
    {
        if (fileName[i] == '.')
            fileName[i] = '_';
    }
    fileName += ".json";

    bool czyPlikIstnieje = false;
    this->getJSon(fileName.c_str(), czyPlikIstnieje);
    if (czyPlikIstnieje)
    {
        if (this->object0JSon["haslo"].GetString() == this->zalogowany_uzytkownik->getPwd())
        {
            czyHasloPoprawne = 1;
            std::string poziom_uprawnien;
            poziom_uprawnien = this->object0JSon["level"].GetString();
            return poziom_uprawnien;
        }
        else
        {
            czyHasloPoprawne = 0;
            return "";
        }
    }
    else
    {
        czyHasloPoprawne = 0;
        return "";
    }
}

void CRest::dodaj_zaproszenie_do_ligi_druzynowej()
{
    std::fstream plik;
    std::string nazwa_pliku = this->object_id;
    nazwa_pliku += ".json";
    plik.open(nazwa_pliku.c_str(), std::ios_base::out);

    plik << this->current_json;
}
