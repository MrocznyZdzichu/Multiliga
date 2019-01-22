///////////////////////////////////////////////////////////
//  GCDodajLige.h
//  Implementation of the Class GCDodajLige
//  Created on:      15-sty-2019 02:12:04
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_434A3267_3D2C_47be_B949_706DA18869A8__INCLUDED_)
#define EA_434A3267_3D2C_47be_B949_706DA18869A8__INCLUDED_

#include "CListaLig.h"
class CLiga;
class GCDodajLige
{

public:
	GCDodajLige();
	virtual ~GCDodajLige();
	CLiga *m_CLiga;
	CListaLig *m_CListaLig;

};
#endif // !defined(EA_434A3267_3D2C_47be_B949_706DA18869A8__INCLUDED_)
