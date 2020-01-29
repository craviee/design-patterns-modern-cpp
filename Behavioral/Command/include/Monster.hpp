#pragma once

class Monster
{
    public:
        Monster(int HP, int power) : HP{HP}, power{power}{};
        ~Monster(){};

        int HP,power;
};