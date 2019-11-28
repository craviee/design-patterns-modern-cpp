#pragma once

#include "Monster.hpp"

class Orc : public Monster
{
    public:
        Orc() { power = 80; };
        void attack() { std::cout << "I am a Orc!" << std::endl; }
};