#pragma once
#include <string>
#include <vector>
#include "Products.h"

using namespace std;

class Balloons : public Products {
public:
    string NameOfProduct;

    Balloons() {}
    Balloons(string NameOfProduct) {
        this->NameOfProduct = NameOfProduct;
    }

};