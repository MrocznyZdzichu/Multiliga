///////////////////////////////////////////////////////////
//  CListaLig.h
//  Implementation of the Class CListaLig
//  Created on:      15-sty-2019 02:11:58
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_217C9847_AA08_486c_A6F3_43BBE9746401__INCLUDED_)
#define EA_217C9847_AA08_486c_A6F3_43BBE9746401__INCLUDED_

#include "CLiga.h"
class CLiga;
class CListaLig
{

public:
	CListaLig();
	virtual ~CListaLig();
	CLiga *m_CLiga;

private:
	std::list<CLiga*> lista;

};
#endif // !defined(EA_217C9847_AA08_486c_A6F3_43BBE9746401__INCLUDED_)
