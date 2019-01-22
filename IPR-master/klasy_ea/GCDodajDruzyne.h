///////////////////////////////////////////////////////////
//  GCDodajDruzyne.h
//  Implementation of the Class GCDodajDruzyne
//  Created on:      15-sty-2019 02:12:03
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_33980E0E_95BE_4e59_ABD2_EEC0B976A48D__INCLUDED_)
#define EA_33980E0E_95BE_4e59_ABD2_EEC0B976A48D__INCLUDED_

#include "CListaDruzyn.h"
#include "CDruzyna.h"

class GCDodajDruzyne
{

public:
	GCDodajDruzyne();
	virtual ~GCDodajDruzyne();
	CListaDruzyn *m_CListaDruzyn;
	CDruzyna *m_CDruzyna;

	void druzyna_dodana();
	void nazwa_powtarzalna();

};
#endif // !defined(EA_33980E0E_95BE_4e59_ABD2_EEC0B976A48D__INCLUDED_)
