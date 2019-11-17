#pragma once

#include <string>
#include <iostream>

class Animal {

friend class AnimalFactory;

public:
    void makeSound() { std::cout << sound << std::endl; }

protected:
    std::string sound;
    Animal(){ sound = "..."; };
};