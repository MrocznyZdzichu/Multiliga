#include "COplaty.h"

COplaty::COplaty()
{

}

COplaty::~COplaty()
{

}

void COplaty::wyslij_siebie()
{
    CRest::getRest().current_json = this->JSonString;
}

void COplaty::serializuj()
{
    this->JSonString = "\"";
    this->JSonString += this->priceAsString;
    this->JSonString += "\"";
}

Document COplaty::deserializuj(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().getJSonAndPass(jsonname.c_str(), flag);
    if (flag)
        return d;
    else
        return NULL;
}
