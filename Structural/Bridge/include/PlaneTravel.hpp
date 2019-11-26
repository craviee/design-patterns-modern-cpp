#pragma once

#include "TravelMethod.hpp"

#include <iostream>

class PlaneTravel : public TravelMethod {

public:
    PlaneTravel() { price = 500; };
    void startTravel();
};