#pragma once
#include <string>

using namespace std;

class Products {
public:
    double price;
    int balance;
    bool availability;

    Products(){}
    Products(double price, int balance, bool availability) {
        this->price = price;
        this->balance = balance;
        this->availability = availability;
    }

};



