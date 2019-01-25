///////////////////////////////////////////////////////////
//  CZasady.h
//  Implementation of the Class CZasady
//  Created on:      15-sty-2019 02:12:03
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_1A3645FC_320A_452b_B61F_8376DAF30DAB__INCLUDED_)
#define EA_1A3645FC_320A_452b_B61F_8376DAF30DAB__INCLUDED_

#include "CSerial.h"

#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>

using namespace rapidjson;
class CZasady : public CSerial
{

public:
	CZasady();
	virtual ~CZasady();

    unsigned int liczbaKolejek;
    unsigned int liczbaMeczy;
    unsigned int liczebnoscDruzyn;
    unsigned int liczbaPodmeczy;
    unsigned int czasPodmeczu;
    unsigned int limitPunktow;

    Document pobierz_dane(std::string jsonname);
    void serializuj();
    void wyslij_siebie();
};
#endif // !defined(EA_1A3645FC_320A_452b_B61F_8376DAF30DAB__INCLUDED_)
