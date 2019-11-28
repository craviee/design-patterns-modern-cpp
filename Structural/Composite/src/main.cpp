#include <iostream>

#include "Sector.hpp"
#include "Employee.hpp"

int main()
{
    Sector sec1{"Computing", 1000};
    Sector sec2{"Marketing", 3000};    

    Employee emp1{"Team Leader", 8000};
    Employee emp2{"Dev1", 5000};
    Employee emp3{"Designer", 3000};

    sec1.items.push_back(&emp1);
    sec1.items.push_back(&emp2);

    sec2.items.push_back(&emp3);

    std::cout << "Value sec2: " << sec2.calculateValue() << std::endl;    

    std::cout << "Value sec1: " << sec1.calculateValue() << std::endl;

    emp2.value += 1000;

    std::cout << "Value sec1: " << sec1.calculateValue() << std::endl;

    sec1.items.push_back(&sec2);

    std::cout << "Value: " << sec1.calculateValue() << std::endl;
    
    return 0;
}