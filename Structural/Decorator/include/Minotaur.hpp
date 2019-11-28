#pragma once

#include "Monster.hpp"

class Minotaur : public Monster
{
    public:
        Minotaur() { power = 30; };
        void attack() { std::cout << "I am a Minotaur!\n" << std::endl; }
};