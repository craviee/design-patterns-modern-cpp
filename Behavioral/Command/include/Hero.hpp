#pragma once

class Hero
{
    public:
        Hero(int power) : power{power} {};
        ~Hero(){};
        
        int power;
};