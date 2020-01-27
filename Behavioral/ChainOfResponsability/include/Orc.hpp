#pragma once

#include "Monster.hpp"

class Orc : public Monster {

public:
    Orc(Party& party) : Monster{party} { power = 2; };
    ~Orc(){};
    void handle() override { party.power += power; Monster::handle(); }
};