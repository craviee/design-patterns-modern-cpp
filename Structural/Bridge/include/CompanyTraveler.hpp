#pragma once

#include "Traveler.hpp"

#include <iostream>

class CompanyTraveler : Traveler {

public:
    CompanyTraveler(std::shared_ptr<TravelMethod> _method) : Traveler{_method} {};
    void doTravel();
};