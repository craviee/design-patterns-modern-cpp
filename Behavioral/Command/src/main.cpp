#include <iostream>

#include "PartyAttackCommand.hpp"

int main()
{
    Hero knight{3};
    Hero mage{2};
    Hero cleric{1};
    Monster goblin{4,2};
    Monster goblin2{1,2};

    AttackCommand action1{knight, goblin};
    AttackCommand action2{mage, goblin};
    action1.execute();
    action2.execute();

    std::vector<Hero> party = {cleric, mage};
    PartyAttackCommand action3{party, goblin2};
    action3.execute();

    std::vector<Hero> party2 = {mage, cleric};
    PartyAttackCommand action4{party2, goblin2};
    action4.execute();
    
    return 0;
}