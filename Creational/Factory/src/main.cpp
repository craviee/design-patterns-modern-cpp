#include <iostream>

#include <AnimalFactory.hpp>

int main()
{
    Animal dog1 = AnimalFactory::createAnimal("Dog");
    Animal cat1 = AnimalFactory::createAnimal("Cat");
    Animal animal1 = AnimalFactory::createAnimal("anything that is not Dog or Cat");

    dog1.makeSound();
    cat1.makeSound();
    animal1.makeSound();

    auto dog2 = static_cast<Dog*>(&dog1);
    dog2->lickOwner();

    auto cat2 = static_cast<Cat*>(&cat1);
    cat2->breakThings();
    
    return 0;
}
