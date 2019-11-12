#pragma once

#include "Car.hpp"

class CarBuilder{

public:
    CarBuilder(){};
    ~CarBuilder(){};
    Car getCar();
    CarBuilder& addWheel();
    CarBuilder& addMotor();
    CarBuilder& addPaint(std::string _paint);
    CarBuilder& resetCar();

private:
    Car car;
};