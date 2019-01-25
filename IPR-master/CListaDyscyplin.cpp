///////////////////////////////////////////////////////////
//  CListaDyscyplin.cpp
//  Implementation of the Class CListaDyscyplin
//  Created on:      15-sty-2019 02:11:56
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CListaDyscyplin.h"
#include "CRest.h"

CListaDyscyplin::CListaDyscyplin()
{

}



CListaDyscyplin::~CListaDyscyplin()
{

}

void CListaDyscyplin::serializuj()
{

}

Document CListaDyscyplin::pobierz_dane(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().wez_json_i_przekaz(jsonname.c_str(), flag);
    if (flag)
        return d;
}
void CListaDyscyplin::wyslij_siebie()
{

}
