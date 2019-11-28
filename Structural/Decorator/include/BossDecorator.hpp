#pragma once

#include "MonsterDecorator.hpp"

class BossDecorator : public MonsterDecorator {

public:
    BossDecorator(Monster& monster) : MonsterDecorator{monster} {};
    void attack() { monster.attack() ; std::cout << "And I am a Strong Boss!" << std::endl; }
};