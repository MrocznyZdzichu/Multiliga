///////////////////////////////////////////////////////////
//  GCDodajKontoGracza.h
//  Implementation of the Class GCDodajKontoGracza
//  Created on:      15-sty-2019 02:12:04
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_08D23A79_CEBB_446d_A05C_C9F372BF2B45__INCLUDED_)
#define EA_08D23A79_CEBB_446d_A05C_C9F372BF2B45__INCLUDED_

#include "CGracz.h"

class GCDodajKontoGracza
{

public:
	GCDodajKontoGracza();
	virtual ~GCDodajKontoGracza();
	CGracz *m_CGracz;

	void nieudane_tworzenie_uzytkownika();

};
#endif // !defined(EA_08D23A79_CEBB_446d_A05C_C9F372BF2B45__INCLUDED_)
