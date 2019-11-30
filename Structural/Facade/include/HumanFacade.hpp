#pragma once

#include <iostream>

#include "PremiumDogFood.hpp"
#include "SmallDogBow.hpp"
#include "Dog.hpp"

class HumanFacade
{
    public:
        HumanFacade(std::string name) : name{name} {};
        std::string name;
        void feedDog();
};