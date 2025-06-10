#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;


class Cachorro : public Animal{
    public:
    Cachorro();
    void Latir() const;
};