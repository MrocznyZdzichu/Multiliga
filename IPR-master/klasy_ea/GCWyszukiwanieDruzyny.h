///////////////////////////////////////////////////////////
//  GCWyszukiwanieDruzyny.h
//  Implementation of the Class GCWyszukiwanieDruzyny
//  Created on:      15-sty-2019 02:12:09
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_5FF0E5D1_7E2C_4063_B6F9_4625B27AE425__INCLUDED_)
#define EA_5FF0E5D1_7E2C_4063_B6F9_4625B27AE425__INCLUDED_

#include "CListaDruzyn.h"
#include "GCProfilDruzyny.h"
#include "CListaDyscyplin.h"

class GCWyszukiwanieDruzyny
{

public:
	GCWyszukiwanieDruzyny();
	virtual ~GCWyszukiwanieDruzyny();
	CListaDruzyn *m_CListaDruzyn;
	GCProfilDruzyny *m_GCProfilDruzyny;
	CListaDyscyplin *m_CListaDyscyplin;

	boolean lista_gotowa();
	void wyswietl_druzyne(int ind_druzyny);

};
#endif // !defined(EA_5FF0E5D1_7E2C_4063_B6F9_4625B27AE425__INCLUDED_)
