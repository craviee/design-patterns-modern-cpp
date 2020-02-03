#pragma once

#include "AggressiveRace.hpp"

class Dwarf : public AggressiveRace {

public:
    Dwarf(std::string name) : AggressiveRace(name){};
    ~Dwarf(){};
    void sendMessage(std::string message, std::string to);
    void receiveMessage(std::string message);
};