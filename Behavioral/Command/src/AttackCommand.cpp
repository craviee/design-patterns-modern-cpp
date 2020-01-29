#include "AttackCommand.hpp"

bool AttackCommand::execute()
{
    if(hero.power >= monster.power)
    {
        std::cout << "The hero strikes the Monster!" << std::endl;
        monster.HP -= hero.power;
        if(monster.HP > 0)
        {
            std::cout << "The monster has " << monster.HP << " HP left!" << std::endl;                   
        }
        else
        {
            std::cout << "The monster died!" << std::endl;
        }
        return true;
    }
    std::cout << "The hero is not strong enough to hit the monster!" << std::endl;
    return false;
}