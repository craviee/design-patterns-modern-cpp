#pragma once

#include "MonsterDecorator.hpp"

class FlyDecorator : public MonsterDecorator {

public:
    FlyDecorator(Monster& monster) : MonsterDecorator{monster} {};
    void attack() { monster.attack() ; std::cout << "And I can Fly!" << std::endl; }
};