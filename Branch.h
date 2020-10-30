#pragma once
#include <string>
#include <vector>
#include "Staff.h"
#include "Flowers.h"
#include "Balloons.h"
#include "Toys.h"
#include "Brand.h"
#include "Address.h"

using namespace std;

class Branch : public Brand {
public:
    Address actualAddress;
    string manager;
    vector<Staff> staff;
    vector<Flowers> flowers;
    vector<Balloons> balloons;
    vector<Toys> toys;

    Branch() {}
    Branch(Address actualAddress, string manager, vector<Flowers> flowers, vector<Balloons> balloons, vector<Toys> toys) {
        this->actualAddress = actualAddress;
        this->manager = manager;
        this->staff = staff;
        this->flowers = flowers;
        this->balloons = balloons;
        this->toys = toys;

    }
};
