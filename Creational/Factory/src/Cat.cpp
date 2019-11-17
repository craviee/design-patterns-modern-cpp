#include "Cat.hpp"

Cat::Cat()
{
    sound = "Miau!";
}

void Cat::breakThings()
{
    std::cout << "You like that vase? what a shame, Miau" << std::endl;
}