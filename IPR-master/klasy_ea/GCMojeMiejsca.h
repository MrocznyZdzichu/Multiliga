///////////////////////////////////////////////////////////
//  GCMojeMiejsca.h
//  Implementation of the Class GCMojeMiejsca
//  Created on:      15-sty-2019 02:12:06
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_EB8D4740_87C7_4e1e_B9D8_2C74C2611568__INCLUDED_)
#define EA_EB8D4740_87C7_4e1e_B9D8_2C74C2611568__INCLUDED_

#include "CListaMiejsc.h"
#include "GCEdytujMiejsca.h"

class GCMojeMiejsca
{

public:
	GCMojeMiejsca();
	virtual ~GCMojeMiejsca();
	CListaMiejsc *m_CListaMiejsc;
	GCEdytujMiejsca *m_GCEdytujMiejsca;

	void utworz_nowe_miejsce();
	void zarzadzaj_miejscami();

};
#endif // !defined(EA_EB8D4740_87C7_4e1e_B9D8_2C74C2611568__INCLUDED_)
