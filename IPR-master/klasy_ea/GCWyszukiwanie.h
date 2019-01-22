///////////////////////////////////////////////////////////
//  GCWyszukiwanie.h
//  Implementation of the Class GCWyszukiwanie
//  Created on:      15-sty-2019 02:12:08
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_9FE8D7B4_12D4_45c7_A602_94173A98817D__INCLUDED_)
#define EA_9FE8D7B4_12D4_45c7_A602_94173A98817D__INCLUDED_

#include "GCWyszukiwanieGracza.h"
#include "GCWyszukiwanieDruzyny.h"
#include "GCWyszukiwanieLigi.h"
#include "GCWyszukiwanieMiasta.h"

class GCWyszukiwanie
{

public:
	GCWyszukiwanie();
	virtual ~GCWyszukiwanie();
	GCWyszukiwanieGracza *m_GCWyszukiwanieGracza;
	GCWyszukiwanieDruzyny *m_GCWyszukiwanieDruzyny;
	GCWyszukiwanieLigi *m_GCWyszukiwanieLigi;
	GCWyszukiwanieMiasta *m_GCWyszukiwanieMiasta;

};
#endif // !defined(EA_9FE8D7B4_12D4_45c7_A602_94173A98817D__INCLUDED_)
