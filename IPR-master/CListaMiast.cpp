#include "CListaMiast.h"
#include "CRest.h"
CListaMiast::CListaMiast()
{
}
CListaMiast::~CListaMiast()
{

}
CListaMiast::CListaMiast(std::string jsonname)
{

}
void CListaMiast::serializuj()
{

}
rapidjson::Document CListaMiast::pobierz_dane(std::string jsonname)
{
    bool fileExist;
    Document d = CRest::getRest().wez_json_i_przekaz(jsonname.c_str(), fileExist);
    if (fileExist)
        return d;
}
void CListaMiast::wyslij_siebie()
{

}
