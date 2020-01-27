#pragma once

#include <string>
#include <iostream>

#include "Party.hpp"

class Hero {

public:
    Hero(int power) : power{power}{};
    ~Hero(){};
    int power;

    void fight(Party party);
};