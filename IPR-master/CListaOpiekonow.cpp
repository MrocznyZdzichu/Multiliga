#include "CListaOpiekonow.h"

CListaOpiekonow::CListaOpiekonow()
{

}
CListaOpiekonow::~CListaOpiekonow()
{

}
Document CListaOpiekonow::deserializuj(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().getJSonAndPass(jsonname.c_str(), flag);
    if (flag)
        return d;
    else
    {
        emit CRest::getRest().fileNotFound(QString("Nie znaleziono listy opiekunów"));
        return NULL;
    }
}

void CListaOpiekonow::serializuj()
{

}

void CListaOpiekonow::wyslij_siebie()
{

}
