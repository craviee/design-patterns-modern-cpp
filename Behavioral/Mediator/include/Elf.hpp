#pragma once

#include "AggressiveRace.hpp"

class Elf : public AggressiveRace {

public:
    Elf(std::string name) : AggressiveRace(name){};
    ~Elf(){};
    void sendMessage(std::string message, std::string to);
    void receiveMessage(std::string message);
};