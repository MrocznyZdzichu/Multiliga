///////////////////////////////////////////////////////////
//  GCDodajKonto.h
//  Implementation of the Class GCDodajKonto
//  Created on:      15-sty-2019 02:12:03
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_3156875A_B9B8_45d9_B9ED_0F7D61FC8AE3__INCLUDED_)
#define EA_3156875A_B9B8_45d9_B9ED_0F7D61FC8AE3__INCLUDED_

#include "GCDodajKontoGracza.h"
#include "GCDodajDruzyne.h"

class GCDodajKonto
{

public:
	GCDodajKonto();
	virtual ~GCDodajKonto();
	GCDodajKontoGracza *m_GCDodajKontoGracza;
	GCDodajDruzyne *m_GCDodajDruzyne;

};
#endif // !defined(EA_3156875A_B9B8_45d9_B9ED_0F7D61FC8AE3__INCLUDED_)
