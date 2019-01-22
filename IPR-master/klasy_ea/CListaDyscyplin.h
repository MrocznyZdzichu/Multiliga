///////////////////////////////////////////////////////////
//  CListaDyscyplin.h
//  Implementation of the Class CListaDyscyplin
//  Created on:      15-sty-2019 02:11:56
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_6C377985_B53A_4867_9E47_00F13B1D9BAC__INCLUDED_)
#define EA_6C377985_B53A_4867_9E47_00F13B1D9BAC__INCLUDED_

#include "CDyscyplina.h"

class CListaDyscyplin
{

public:
	CListaDyscyplin();
	virtual ~CListaDyscyplin();
	CDyscyplina *m_CDyscyplina;

private:
	std::list<CDyscyplina*> lista;

};
#endif // !defined(EA_6C377985_B53A_4867_9E47_00F13B1D9BAC__INCLUDED_)
