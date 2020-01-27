#include <iostream>

#include "Hero.hpp"
#include "Party.hpp"
#include "Goblin.hpp"
#include "Orc.hpp"
#include "Minotaur.hpp"

int main()
{
    Hero knight{10};
    Hero mage{6};
    Hero novice{1};

    Party monsterParty{};
    Goblin goblin{ monsterParty };
    Minotaur minotaur{ monsterParty };
    Orc orc{ monsterParty };

    goblin.add(&minotaur);
    goblin.add(&orc);
    goblin.handle();

    knight.fight(monsterParty);
    mage.fight(monsterParty);
    novice.fight(monsterParty);

    return 0;
}

