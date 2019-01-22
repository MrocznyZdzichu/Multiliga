///////////////////////////////////////////////////////////
//  CListaOgloszen.h
//  Implementation of the Class CListaOgloszen
//  Created on:      15-sty-2019 02:11:58
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_5A5887FD_4B9D_400a_9CF6_FC7E95A23143__INCLUDED_)
#define EA_5A5887FD_4B9D_400a_9CF6_FC7E95A23143__INCLUDED_

#include "COgloszenie.h"

class CListaOgloszen
{

public:
	CListaOgloszen();
	virtual ~CListaOgloszen();
	COgloszenie *m_COgloszenie;

};
#endif // !defined(EA_5A5887FD_4B9D_400a_9CF6_FC7E95A23143__INCLUDED_)
