///////////////////////////////////////////////////////////
//  GCProfilMiasta.h
//  Implementation of the Class GCProfilMiasta
//  Created on:      15-sty-2019 02:12:07
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_DFBD8235_32BE_4958_9A20_CDB6401F1DA6__INCLUDED_)
#define EA_DFBD8235_32BE_4958_9A20_CDB6401F1DA6__INCLUDED_

#include "GCProfilMiejsca.h"
#include "CMiasto.h"

class GCProfilMiasta
{

public:
	GCProfilMiasta();
	virtual ~GCProfilMiasta();
	GCProfilMiejsca *m_GCProfilMiejsca;
	CMiasto *m_CMiasto;

};
#endif // !defined(EA_DFBD8235_32BE_4958_9A20_CDB6401F1DA6__INCLUDED_)
