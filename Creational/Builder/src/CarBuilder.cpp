#include "CarBuilder.hpp"

Car CarBuilder::getCar()
{
    return car;
}

CarBuilder& CarBuilder::resetCar()
{
    car.reset();
    return *this;
}

CarBuilder& CarBuilder::addWheel()
{
    car.addWheel();
    return *this;
}

CarBuilder& CarBuilder::addMotor()
{
    car.addMotor();
    return *this;
}

CarBuilder& CarBuilder::addPaint(const std::string _paint)
{
    car.addPaint(_paint);
    return *this;
}