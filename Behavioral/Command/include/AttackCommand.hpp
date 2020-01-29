#pragma once

#include <iostream>

#include "TurnCommand.hpp"

class AttackCommand : public TurnCommand
{
    public:
        AttackCommand(Hero& hero, Monster& monster) : TurnCommand(monster), hero{hero} {};
        ~AttackCommand(){};
        bool execute();
    private:
        Hero& hero;
};