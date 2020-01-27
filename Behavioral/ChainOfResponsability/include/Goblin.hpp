#pragma once

#include "Monster.hpp"

class Goblin : public Monster {

public:
    Goblin(Party& party) : Monster{party} { power = 1; };
    ~Goblin(){};
    void handle() override { party.power += power; Monster::handle(); }
};