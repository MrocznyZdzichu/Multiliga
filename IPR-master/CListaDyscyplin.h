///////////////////////////////////////////////////////////
//  CListaDyscyplin.h
//  Implementation of the Class CListaDyscyplin
//  Created on:      15-sty-2019 02:11:56
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_6C377985_B53A_4867_9E47_00F13B1D9BAC__INCLUDED_)
#define EA_6C377985_B53A_4867_9E47_00F13B1D9BAC__INCLUDED_
#include "CSerial.h"
#include "CDyscyplina.h"
#include <list>
using namespace rapidjson;
class CListaDyscyplin : public CSerial
{

public:
	CListaDyscyplin();
	virtual ~CListaDyscyplin();
    Document ListaDyscyplinDOM;
    std::list<CDyscyplina> listaDsycyplin;

    void serializuj ();
    Document deserializuj(std::string jsonname);
    void wyslij_siebie();

};
#endif // !defined(EA_6C377985_B53A_4867_9E47_00F13B1D9BAC__INCLUDED_)
