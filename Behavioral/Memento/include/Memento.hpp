#pragma once

class Memento
{
    friend class Human;
    
    public:
        ~Memento(){};
    private:
        Memento(int life) : life{life}{};
        int life;
};