///////////////////////////////////////////////////////////
//  CListaMiejsc.cpp
//  Implementation of the Class CListaMiejsc
//  Created on:      15-sty-2019 02:11:58
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CListaMiejsc.h"
#include "CRest.h"

CListaMiejsc::CListaMiejsc()
{

}

CListaMiejsc::~CListaMiejsc()
{

}

void CListaMiejsc::serializuj()
{

}
Document CListaMiejsc::deserializuj(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().getJSonAndPass(jsonname.c_str(), flag);
    if (flag)
    return d;
}
void CListaMiejsc::wyslij_siebie()
{

}
