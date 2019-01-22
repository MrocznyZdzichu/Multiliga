///////////////////////////////////////////////////////////
//  CDruzyna.cpp
//  Implementation of the Class CDruzyna
//  Created on:      15-sty-2019 02:11:54
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CDruzyna.h"


CDruzyna::CDruzyna()
{

}

CDruzyna::~CDruzyna()
{

}

bool CDruzyna::czy_nalezy_do_ligi()
{
	return  NULL;
}

bool CDruzyna::czy_nazwa_unikalna()
{
	return  NULL;
}

void CDruzyna::wyslij_siebie()
{

}

void CDruzyna::serializuj()
{

}

Document CDruzyna::deserializuj(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().getJSonAndPass(jsonname.c_str(), flag);
    if (flag)
        return d;
}
