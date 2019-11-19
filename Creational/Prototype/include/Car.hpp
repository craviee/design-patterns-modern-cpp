#pragma once

#include <string>

class Car {

public:
    Car(){};
    Car(const Car& prototype) : color(prototype.color){};
    std::string color = "<empty>";
};