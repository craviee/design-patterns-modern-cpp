#include "Monster.hpp"

void Monster::add(Monster* monster)
{
    if(!next)
    {
        next = monster;
    }
    else
    {
        next->add(monster);
    }
}

void Monster::handle()
{
    if(next)
    {
        next->handle();
    }
}