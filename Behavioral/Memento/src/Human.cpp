#include "Human.hpp"

Memento Human::takeDamage(int damage)
{
    life -= damage;
    return {life};
}

void Human::restore(Memento& memento)
{
    life = memento.life;
}