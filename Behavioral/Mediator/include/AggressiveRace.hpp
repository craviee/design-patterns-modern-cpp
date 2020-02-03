#pragma once

#include <string>
#include <iostream>

#include "Mediator.hpp"

class Mediator;

class AggressiveRace {

public:
    ~AggressiveRace(){};
    virtual void sendMessage(std::string message, std::string to) = 0;
    std::string name;
    Mediator* mediator;
    virtual void receiveMessage(std::string message) = 0;

protected:
    AggressiveRace(std::string name) : name{name} {};
    
};