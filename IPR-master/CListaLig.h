///////////////////////////////////////////////////////////
//  CListaLig.h
//  Implementation of the Class CListaLig
//  Created on:      15-sty-2019 02:11:58
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_217C9847_AA08_486c_A6F3_43BBE9746401__INCLUDED_)
#define EA_217C9847_AA08_486c_A6F3_43BBE9746401__INCLUDED_

#include "CRest.h"
#include "CSerial.h"
#include "CLiga.h"
#include <deque>
#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>
class CLiga;
class CListaLig :public CSerial
{

public:
	CListaLig();
	virtual ~CListaLig();

    std::deque<CLiga*> listaLig;
    Document listaLigDOM;

    Document deserializuj(std::string jsonname);
    void serializuj();
    void wyslij_siebie();


private:
};
#endif // !defined(EA_217C9847_AA08_486c_A6F3_43BBE9746401__INCLUDED_)
