#pragma once

#include "Monster.hpp"

class Minotaur : public Monster {

public:
    Minotaur(Party& party) : Monster{party} { power = 3; };
    ~Minotaur(){};
    void handle() override { party.power += power; Monster::handle(); }
};