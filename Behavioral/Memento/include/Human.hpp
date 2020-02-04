#pragma once

#include "Memento.hpp"

class Human
{
    public:
        Human(int life) : life{life}{};
        ~Human(){};
        Memento takeDamage(int damage);
        void restore(Memento& memento);
        int getLife() { return life; };
    private:
        int life;
};