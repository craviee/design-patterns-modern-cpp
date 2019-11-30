#pragma once

#include "DogBow.hpp"

class SmallDogBow : public DogBow
{
    public:
        SmallDogBow(DogFood& food) : DogBow{food} { name = "Small bow"; };
};