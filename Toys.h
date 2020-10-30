#pragma once
#include <string>
#include <vector>
#include "Products.h"

using namespace std;

class Toys : public Products {
public:
    string NameOfProduct;

    Toys() {}
    Toys(string NameOfProduct) {
        this->NameOfProduct = NameOfProduct;
    }

};