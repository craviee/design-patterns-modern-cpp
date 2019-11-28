#pragma once

#include "Monster.hpp"

class MonsterDecorator : public Monster {

protected:
    MonsterDecorator(Monster& monster) : monster{monster} {};
    Monster& monster;
    void attack() { };
};