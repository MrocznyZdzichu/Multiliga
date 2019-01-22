///////////////////////////////////////////////////////////
//  GCWyszukiwanieLigi.h
//  Implementation of the Class GCWyszukiwanieLigi
//  Created on:      15-sty-2019 02:12:09
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_B221EB69_0225_4526_8A6E_03DFF3BDBC5D__INCLUDED_)
#define EA_B221EB69_0225_4526_8A6E_03DFF3BDBC5D__INCLUDED_

#include "GCProfilLigi.h"
#include "CListaLig.h"

class GCWyszukiwanieLigi
{

public:
	GCWyszukiwanieLigi();
	virtual ~GCWyszukiwanieLigi();
	GCProfilLigi *m_GCProfilLigi;
	CListaLig *m_CListaLig;

};
#endif // !defined(EA_B221EB69_0225_4526_8A6E_03DFF3BDBC5D__INCLUDED_)
