#include "Dog.hpp"

Dog::Dog()
{
    sound = "Au au au!";
}

void Dog::lickOwner()
{
    std::cout << "*Dog licks owner*" << std::endl;
}