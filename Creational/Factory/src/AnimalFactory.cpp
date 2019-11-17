#include "AnimalFactory.hpp"

AnimalFactory::AnimalFactory() {}

Animal AnimalFactory::createAnimal(std::string type)
{
    if(type == "Dog")
        return Dog();
    else if(type == "Cat")
        return Cat();
    else
        return Animal();
}