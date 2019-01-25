#include "COplaty.h"

COplaty::COplaty()
{

}

COplaty::~COplaty()
{

}

void COplaty::wyslij_siebie()
{
    CRest::getRest().current_json = this->json_do_wyslania;
}

void COplaty::serializuj()
{
    this->json_do_wyslania = "\"";
    this->json_do_wyslania += this->priceAsString;
    this->json_do_wyslania += "\"";
}

Document COplaty::pobierz_dane(std::string jsonname)
{
    bool flag;
    Document d = CRest::getRest().wez_json_i_przekaz(jsonname.c_str(), flag);
    if (flag)
        return d;
    else
        return NULL;
}
