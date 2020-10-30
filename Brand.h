#pragma once
#include <string>
#include <vector>
#include "Requisites.h"
#include "Owner.h"

using namespace std;

class Brand {
public:
string nameOfCompany;
Owner owner;
Requisites requisites;

  Brand(){}
  Brand(string nameOfCompany, Owner owner, Requisites requisites){
    this->nameOfCompany = nameOfCompany;
    this->owner = owner;
    this->requisites = requisites;
}
};



