#ifndef CLISTAMIAST_H
#define CLISTAMIAST_H
#include "CSerial.h"
#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>
#include <list>
#include <CMiasto.h>
using namespace rapidjson;
class CListaMiast : public CSerial
{
public:
    CListaMiast();
    ~CListaMiast();
    CListaMiast(std::string jsonname);

    rapidjson::Document ListaMiastDOM;
    std::list<CMiasto> listaMiast;

    rapidjson::Document pobierz_dane(std::string jsonname);
    void serializuj();
    void wyslij_siebie();

};

#endif // CLISTAMIAST_H
