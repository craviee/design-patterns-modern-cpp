#pragma once

#include <memory>

#include "TravelMethod.hpp"

class Traveler {

public:
    virtual void doTravel() = 0;

protected:
    Traveler(std::shared_ptr<TravelMethod> _method) : method{_method} {};
    std::shared_ptr<TravelMethod> method;
};