///////////////////////////////////////////////////////////
//  CDyscyplina.h
//  Implementation of the Class CDyscyplina
//  Created on:      15-sty-2019 02:11:54
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_B5C24C39_175B_4b87_9B54_9EF64F4D3676__INCLUDED_)
#define EA_B5C24C39_175B_4b87_9B54_9EF64F4D3676__INCLUDED_
#include "CSerial.h"
#include "CRest.h"

using namespace rapidjson;

class CDyscyplina : public CSerial
{

public:
    CDyscyplina();
    CDyscyplina(std::string nazwa_dyscypliny);
	virtual ~CDyscyplina();

    std::string nazwaDyscypliny;

    void serializuj();
    Document pobierz_dane(std::string jsonname);
    void wyslij_siebie();
};
#endif // !defined(EA_B5C24C39_175B_4b87_9B54_9EF64F4D3676__INCLUDED_)
