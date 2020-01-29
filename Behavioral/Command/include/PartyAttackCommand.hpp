#pragma once

#include <iostream>
#include <vector>

#include "AttackCommand.hpp"

class PartyAttackCommand : public TurnCommand
{
    public:
        PartyAttackCommand(std::vector<Hero>& heroes, Monster& monster) : TurnCommand(monster), heroes{heroes} {};
        ~PartyAttackCommand(){};
        bool execute();
    private:
        std::vector<Hero>& heroes;
};