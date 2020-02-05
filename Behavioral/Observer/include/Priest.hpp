#pragma once

#include "Observer.hpp"
#include "Human.hpp"
#include <iostream>

class Priest : public Observer<Human>
{
    public:
        Priest(){};
        ~Priest(){};
        void onUpdate(Human& source, std::string field) { std::cout << "I must heal the human!" << std::endl; };
};