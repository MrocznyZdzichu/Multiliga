///////////////////////////////////////////////////////////
//  CRest.cpp
//  Implementation of the Class CRest
//  Created on:      15-sty-2019 02:12:01
//  Original author: Myles
///////////////////////////////////////////////////////////

#include "CRest.h"

CRest::CRest(){

}
CRest::~CRest(){


}
void odbierz_obiekt(std::string json_filename, std::vector<CUzytkownik*>& system_users)
{
    FILE* fp = fopen(json_filename.c_str(), "rb");
    char readBuffer[65536];

    rapidjson::FileReadStream is(fp, readBuffer, sizeof(readBuffer));
    rapidjson::Document d;
    d.ParseStream(is);
    fclose(fp);
}
bool CRest::sprawdz_haslo(std::string p_haslo){

	return  NULL;
}


void CRest::sprawdz_unikalnosc(std::string pole, std::string wartosc){

}


/*void CRest::wyslij_obiekt(json tx){

}*/
