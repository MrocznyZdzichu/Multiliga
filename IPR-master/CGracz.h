///////////////////////////////////////////////////////////
//  CGracz.h
//  Implementation of the Class CGracz
//  Created on:      15-sty-2019 02:11:55
//  Original author: Myles
///////////////////////////////////////////////////////////
#include "CUzytkownik.h"
#if !defined(EA_1481BA45_62A5_407b_A3FD_BB2DB47D39AD__INCLUDED_)
#define EA_1481BA45_62A5_407b_A3FD_BB2DB47D39AD__INCLUDED_

#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>

#include "CLiga.h"
#include "CNagroda.h"
#include "CKarnet.h"
using namespace rapidjson;

class CGracz : public CUzytkownik
{

public:
	CGracz();
	virtual ~CGracz();

    void wyslij_siebie();
    void serializuj();
    Document pobierz_dane(std::string jsonname);

};
#endif // !defined(EA_1481BA45_62A5_407b_A3FD_BB2DB47D39AD__INCLUDED_)
