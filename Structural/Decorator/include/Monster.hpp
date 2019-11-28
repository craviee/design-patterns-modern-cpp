#pragma once

#include <iostream>
#include <vector>

class Monster
{
    public:
        virtual void attack() = 0;

        std::vector<std::string> properties;
        int power = 0;
};