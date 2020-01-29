#include "PartyAttackCommand.hpp"

bool PartyAttackCommand::execute()
{
    for(auto& hero : heroes)
    {
        if(monster.HP <=0)
        {
            break;
        }
        AttackCommand attack{hero, monster};
        if(!attack.execute())
        {
            std::cout << "The party turn ends here!" << std::endl;
            return false;
        }
    }
    return true;
}