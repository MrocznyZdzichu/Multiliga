///////////////////////////////////////////////////////////
//  CDruzyna.h
//  Implementation of the Class CDruzyna
//  Created on:      15-sty-2019 02:11:54
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_00B30A6A_1E43_4068_99AB_5DD93131D379__INCLUDED_)
#define EA_00B30A6A_1E43_4068_99AB_5DD93131D379__INCLUDED_

#include <vector>
#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>

#include "CSerial.h"
#include "CLiga.h"
#include "CMiasto.h"
#include "CDyscyplina.h"
#include "CGracz.h"

using namespace rapidjson;

class CDruzyna : public CSerial
{

public:
	CDruzyna();
	virtual ~CDruzyna();
    std::string nazwa;
    CLiga* liga;
    CMiasto* miasto;
    CDyscyplina* dyscyplina;
    std::vector<CGracz*> graczeDruzyny;
    std::string opis;
    CLiga* poprzednia_liga;
    std::string osiagniecia;

    CDruzyna* zwroc_druzyny(std::string nazwa_druzyny);

    void wyslij_siebie();
    void serializuj();
    Document pobierz_dane(std::string jsonname);
};
#endif // !defined(EA_00B30A6A_1E43_4068_99AB_5DD93131D379__INCLUDED_)
