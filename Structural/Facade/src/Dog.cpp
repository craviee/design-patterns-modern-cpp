#include "Dog.hpp"

void Dog::eat(DogBow& bow)
{
    std::cout << "Dog is going to eat a " << bow.food.name << " on a " << bow.name << "." << std::endl;
}