///////////////////////////////////////////////////////////
//  GCUtworzMiejsceRozgrywek.h
//  Implementation of the Class GCUtworzMiejsceRozgrywek
//  Created on:      15-sty-2019 02:12:08
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_CA7A2673_E06B_4257_887D_CD1709DB1825__INCLUDED_)
#define EA_CA7A2673_E06B_4257_887D_CD1709DB1825__INCLUDED_

#include "CRest.h"

class GCUtworzMiejsceRozgrywek
{

public:
	GCUtworzMiejsceRozgrywek();
	virtual ~GCUtworzMiejsceRozgrywek();
	CRest *m_CRest;

	void ustaw_parametry_miejsca();

};
#endif // !defined(EA_CA7A2673_E06B_4257_887D_CD1709DB1825__INCLUDED_)
