///////////////////////////////////////////////////////////
//  CMiasto.h
//  Implementation of the Class CMiasto
//  Created on:      15-sty-2019 02:11:59
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_1CA5B091_EA8E_4be2_8A59_B6661761C690__INCLUDED_)
#define EA_1CA5B091_EA8E_4be2_8A59_B6661761C690__INCLUDED_

#include "CRest.h"
#include "CSerial.h"

using namespace rapidjson;

class CMiasto : public CSerial
{

public:
	CMiasto();
	virtual ~CMiasto();

    std::string nazwaMiasta;

    void serializuj();
    Document pobierz_dane(std::string jsonname);
    void wyslij_siebie();
};
#endif // !defined(EA_1CA5B091_EA8E_4be2_8A59_B6661761C690__INCLUDED_)
