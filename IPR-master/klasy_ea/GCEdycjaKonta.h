///////////////////////////////////////////////////////////
//  GCEdycjaKonta.h
//  Implementation of the Class GCEdycjaKonta
//  Created on:      15-sty-2019 02:12:04
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_25505254_260A_4725_A718_4267CDA5F563__INCLUDED_)
#define EA_25505254_260A_4725_A718_4267CDA5F563__INCLUDED_

#include "CRest.h"

class GCEdycjaKonta
{

public:
	GCEdycjaKonta();
	virtual ~GCEdycjaKonta();
	CRest *m_CRest;

    bool zmiana_emaila(std::string n_email);
	void zmiana_niepoprawna();
	void zmiana_poprawna();

};
#endif // !defined(EA_25505254_260A_4725_A718_4267CDA5F563__INCLUDED_)
