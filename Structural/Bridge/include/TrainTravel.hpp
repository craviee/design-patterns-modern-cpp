#pragma once

#include "TravelMethod.hpp"

#include <iostream>

class TrainTravel : public TravelMethod {

public:
    TrainTravel() { price = 50; };
    void startTravel();
};