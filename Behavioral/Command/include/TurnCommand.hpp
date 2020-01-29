#pragma once

#include "Hero.hpp"
#include "Monster.hpp"

class TurnCommand
{
    public:
        ~TurnCommand(){};
        virtual bool execute() = 0;

    protected:
        Monster& monster;
        TurnCommand(Monster& monster) : monster{monster}{};
};