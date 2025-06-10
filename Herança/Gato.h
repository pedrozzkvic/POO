#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;


class Gato : public Animal{
    public:
    Gato();
    void Miar() const;
};