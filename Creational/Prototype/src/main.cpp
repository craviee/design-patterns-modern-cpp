#include <iostream>
#include <memory>

#include <Car.hpp>

int main()
{
    auto car1 = std::make_unique<Car>();

    std::cout << "Car1 has " << car1->color << " color" << std::endl;

    car1->color = "red";
    std::cout << "Car1 has " << car1->color << " color" << std::endl;

    auto car2 = std::make_unique<Car>(*car1);
    std::cout << "Car2 has " << car2->color << " color" << std::endl;

    car2->color = "blue";
    std::cout << "Car2 has " << car2->color << " color" << std::endl;
    std::cout << "Car1 has " << car1->color << " color" << std::endl;
    
    return 0;
}