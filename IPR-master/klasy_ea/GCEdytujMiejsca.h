///////////////////////////////////////////////////////////
//  GCEdytujMiejsca.h
//  Implementation of the Class GCEdytujMiejsca
//  Created on:      15-sty-2019 02:12:04
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_3947E471_5779_47b0_A115_651273A23E2A__INCLUDED_)
#define EA_3947E471_5779_47b0_A115_651273A23E2A__INCLUDED_

#include "CListaDyscyplin.h"
#include "CListaMiejsc.h"
#include "CMiejsce.h"

class GCEdytujMiejsca
{

public:
	GCEdytujMiejsca();
	virtual ~GCEdytujMiejsca();
	CListaDyscyplin *m_CListaDyscyplin;
	CListaMiejsc *m_CListaMiejsc;
	CMiejsce *m_CMiejsce;

};
#endif // !defined(EA_3947E471_5779_47b0_A115_651273A23E2A__INCLUDED_)
