///////////////////////////////////////////////////////////
//  CListaLig.cpp
//  Implementation of the Class CListaLig
//  Created on:      15-sty-2019 02:11:58
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CListaLig.h"


CListaLig::CListaLig()
{

}

CListaLig::~CListaLig()
{

}

Document CListaLig::pobierz_dane(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().wez_json_i_przekaz(jsonname.c_str(), flag);
    if (flag)
        return d;
    else
    {
        emit CRest::getRest().fileNotFound(QString("Nie znaleziono listy lig"));
        return NULL;
    }
}
void CListaLig::serializuj()
{

}

void CListaLig::wyslij_siebie()
{

}
