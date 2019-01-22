///////////////////////////////////////////////////////////
//  CListaGraczy.h
//  Implementation of the Class CListaGraczy
//  Created on:      15-sty-2019 02:11:57
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_47B954A2_9419_460c_B34C_5F1FCD966A0E__INCLUDED_)
#define EA_47B954A2_9419_460c_B34C_5F1FCD966A0E__INCLUDED_

#include "CGracz.h"
#include "CLiga.h"

class CListaGraczy
{

public:
	CListaGraczy();
	virtual ~CListaGraczy();
	CGracz *m_CGracz;
	CLiga *m_CLiga;

private:
	std::list<CGracz*> lista;

};
#endif // !defined(EA_47B954A2_9419_460c_B34C_5F1FCD966A0E__INCLUDED_)
