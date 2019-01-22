///////////////////////////////////////////////////////////
//  CLiga.h
//  Implementation of the Class CLiga
//  Created on:      15-sty-2019 02:11:56
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_8AD134FC_4766_4871_A25E_5B83D4419BB6__INCLUDED_)
#define EA_8AD134FC_4766_4871_A25E_5B83D4419BB6__INCLUDED_

#include "CKolejka.h"
#include "COpiekun.h"
#include "CZasady.h"
#include "CDyscyplina.h"
#include "CMiasto.h"
#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>
using namespace rapidjson;

class CLiga : public CSerial
{

public:
    CLiga();
    virtual ~CLiga();

    std::string nazwaLigi;
    unsigned int poziomLigi;
    std::string sezon;

    CDyscyplina* dyscyplinaLigi;
    CMiasto* miastoLigi;
    COpiekun* opiekunLigi;
    CZasady* zasadyLigi;

    CKolejka *m_CKolejka;

    Document ligaDOM;

    Document deserializuj(std::string jsonname);
    void serializuj();
    void wyslij_siebie();

};
#endif // !defined(EA_8AD134FC_4766_4871_A25E_5B83D4419BB6__INCLUDED_)
