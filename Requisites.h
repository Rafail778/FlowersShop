#pragma once
#include <string>
#include "Address.h"
using namespace std;

class Requisites {
public:
    string nameOfTheLegalEntity;
    int INN;
    int KPP;
    int OGRN;
    Address legalAddress;

    Requisites() {}
    Requisites(int INN, int KPP, int OGRN, Address legalAddress) {
        this->INN = INN;
        this->KPP = KPP;
        this->OGRN = OGRN;
        this->legalAddress = legalAddress;
    }

};

