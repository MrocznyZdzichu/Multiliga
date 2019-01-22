#ifndef CLISTAOPIEKONOW_H
#define CLISTAOPIEKONOW_H

#include <list>
#include "CSerial.h"
#include "COpiekun.h"
#include "CRest.h"
#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>
class CListaOpiekonow :public CSerial
{
public:
    CListaOpiekonow();
    virtual ~CListaOpiekonow();

    Document ListaOpiekunowDOM;
    std::list<COpiekun*> listaOpiekunow;
    Document deserializuj(std::string jsonname);
    void serializuj();
    void wyslij_siebie();
};

#endif // CLISTAOPIEKONOW_H
