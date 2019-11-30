#pragma once

#include <iostream>

#include "DogFood.hpp"

class DogBow
{
    public:
        std::string name;
        DogFood& food;

    protected:
        DogBow(DogFood& food) : food{food} {};
        
};