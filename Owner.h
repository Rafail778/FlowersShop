#pragma once
#include <string>
#include "FIO.h"
#include "Date.h"
using namespace std;
class Owner {
public:
    FIO name;
    Date dateOfBirth;

    Owner() {}
public:
    Owner(FIO name, Date dateOfBirth) {
        this->name = name;
        this->dateOfBirth = dateOfBirth;
    }

};


#endif //FLOWERSTORE_OWNER_H
