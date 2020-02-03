#pragma once

#include "Mediator.hpp"

class Human : public Mediator {

public:
    Human(std::string name) : Mediator(name) {};
    ~Human(){};
    void mediateMessage(std::string from, std::string message, std::string to);
};