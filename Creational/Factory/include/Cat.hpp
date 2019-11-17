#pragma once

#include <Animal.hpp>

class Cat : public Animal {

friend class AnimalFactory;

public:
    void breakThings();

private:
    Cat();
};