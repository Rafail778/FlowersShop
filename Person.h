#pragma once
#include <string>
#include "FIO.h"
#include "Date.h"


using namespace std;

class Person {
public:
    FIO name;
    Date dateOfBirth;
    Person(){}
    Person(FIO name, Date dateOfBirth) {
        this->name = name;
        this->dateOfBirth = dateOfBirth;
    }
};



