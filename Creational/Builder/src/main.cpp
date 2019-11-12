#include <iostream>

#include "CarBuilder.hpp"

int main()
{
    CarBuilder builder;

    auto car = builder
                .addWheel()
                .addWheel()
                .addWheel()
                .addMotor()
                .addPaint("Red")
                .getCar();

    std::cout << "Number of wheels: " << car.getNumberOfWheels() << std::endl;
    std::cout << "Motor: " << car.hasMotor() << std::endl;
    std::cout << "Color: " << car.getColor() << std::endl;

    return 0;
}