///////////////////////////////////////////////////////////
//  CDruzyna.cpp
//  Implementation of the Class CDruzyna
//  Created on:      15-sty-2019 02:11:54
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CDruzyna.h"


CDruzyna::CDruzyna()
{
    this->miasto = new CMiasto;
    this->dyscyplina = new CDyscyplina;
    this->liga = new CLiga;
    this->poprzednia_liga = new CLiga;
}

CDruzyna::~CDruzyna()
{

}

void CDruzyna::wyslij_siebie()
{

}

void CDruzyna::serializuj()
{

}

Document CDruzyna::pobierz_dane(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().wez_json_i_przekaz(jsonname.c_str(), flag);
    if (flag)
        return d;
}

