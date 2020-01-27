#include "Hero.hpp"

void Hero::fight(Party party)
{
    if(power > party.power)
    {
        std::cout << "The hero kills all the monsters!" << std::endl;
    }
    else if (power < party.power)
    {
        std::cout << "The hero is fighting for his life to survive!" << std::endl;
    }
    else
    {
        std::cout << "The hero is not powerfull enough to kill the monsters!" << std::endl;
    }
}