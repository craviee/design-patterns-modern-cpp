#pragma once

#include <vector>

#include "AggressiveRace.hpp"

class AggressiveRace;

class Mediator {

public:
    Mediator(std::string name) : name{name} {};
    ~Mediator(){};
    virtual void mediateMessage(std::string from, std::string message, std::string to) = 0;
    void startFriendship(AggressiveRace* person);
    std::string name;

protected:
    std::vector<AggressiveRace*> persons;
};