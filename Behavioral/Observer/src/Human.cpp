#include "Human.hpp"

void Human::takesDamage(int damage)
{
    setLife(life - damage);
}

void Human::setLife(int life)
{
    this->life = life;
    notify(*this, "life");
}