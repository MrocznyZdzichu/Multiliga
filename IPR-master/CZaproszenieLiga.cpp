///////////////////////////////////////////////////////////
//  CZaproszenieLiga.cpp
//  Implementation of the Class CZaproszenieLiga
//  Created on:      15-sty-2019 02:12:03
//  Original author: Myles
///////////////////////////////////////////////////////////
#include "CLiga.h"
#include "CDruzyna.h"
#include "CZaproszenieLiga.h"


CZaproszenieLiga::CZaproszenieLiga(std::string nazwaDruzyny, std::string nazwaLigi)
{
    this->dataUtworzenia = QDateTime::currentDateTime();

    this->druzyna = new CDruzyna;
    this->druzyna->nazwa = nazwaDruzyny;

    this->liga = new CLiga;
    this->liga->nazwaLigi = nazwaLigi;
}



CZaproszenieLiga::~CZaproszenieLiga(){

}
