///////////////////////////////////////////////////////////
//  GCMenuGlowne.h
//  Implementation of the Class GCMenuGlowne
//  Created on:      15-sty-2019 02:12:05
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_FD9F9C0B_C6A3_4735_BF7D_5655E0844C04__INCLUDED_)
#define EA_FD9F9C0B_C6A3_4735_BF7D_5655E0844C04__INCLUDED_

#include "GCMojeMiejsca.h"
#include "GCMojeLigi.h"
#include "GCWyszukiwanie.h"
#include "GCDodajKonto.h"
#include "COgloszenie.h"
#include "GCZmianaHasla.h"
#include "CListaOgloszen.h"

class GCMenuGlowne
{

public:
	GCMenuGlowne();
	virtual ~GCMenuGlowne();
	GCMojeMiejsca *m_GCMojeMiejsca;
	GCMojeLigi *m_GCMojeLigi;
	GCWyszukiwanie *m_GCWyszukiwanie;
	GCDodajKonto *m_GCDodajKonto;
	COgloszenie *m_COgloszenie;
	GCZmianaHasla *m_GCZmianaHasla;
	CListaOgloszen *m_CListaOgloszen;

    void dodaj_ogloszenie(std::string n_ogloszenie);

};
#endif // !defined(EA_FD9F9C0B_C6A3_4735_BF7D_5655E0844C04__INCLUDED_)
