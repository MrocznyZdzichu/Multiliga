#ifndef COPLATY_H
#define COPLATY_H
#include <vector>
#include "CSerial.h"
#include "CRest.h"
#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>

using namespace rapidjson;

class COplaty : public CSerial
{
public:
    COplaty();
    virtual ~COplaty();

    std::vector<float> lista_oplat;
    Document lista_oplat_DOM;
    std::string priceAsString;
    unsigned int proceAsNumber;

    void wyslij_siebie();
    void serializuj();
    Document deserializuj(std::string jsonname);
};

#endif // COPLATY_H
