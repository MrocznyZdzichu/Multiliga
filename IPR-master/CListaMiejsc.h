///////////////////////////////////////////////////////////
//  CListaMiejsc.h
//  Implementation of the Class CListaMiejsc
//  Created on:      15-sty-2019 02:11:58
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_777C25B8_A7CD_4ffe_A8A7_AC3009EA9D56__INCLUDED_)
#define EA_777C25B8_A7CD_4ffe_A8A7_AC3009EA9D56__INCLUDED_
#include "CSerial.h"
#include "CMiejsce.h"
#include <list>
using namespace rapidjson;

class CListaMiejsc : public CSerial
{

public:
	CListaMiejsc();
	virtual ~CListaMiejsc();
    std::list<CMiejsce*> listaMiejsc;
    Document listaMiejscDOM;

    void serializuj();
    Document deserializuj (std::string jsonname);
    void wyslij_siebie();

private:


};
#endif // !defined(EA_777C25B8_A7CD_4ffe_A8A7_AC3009EA9D56__INCLUDED_)
