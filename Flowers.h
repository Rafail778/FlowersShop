#pragma once
#include <string>
#include <vector>
#include "Products.h"

using namespace std;

class Flowers : public Products {
public:
    string NameOfProduct;

    Flowers() {}
    Flowers(string NameOfProduct) {
        this->NameOfProduct = NameOfProduct;
    }

};


