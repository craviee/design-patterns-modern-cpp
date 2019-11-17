#pragma once

#include "Animal.hpp"

class Dog : public Animal {

friend class AnimalFactory;

public:
    void lickOwner();

protected:
    Dog();
};