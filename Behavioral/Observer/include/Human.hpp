#pragma once

#include "Observable.hpp"

class Human : public Observable<Human>
{
    public:
        Human(int life) : life{life}{};
        ~Human(){};
        int getLife() { return life; };
        void takesDamage(int damage);
    
    private:
        int life;
        void setLife(int life);
};