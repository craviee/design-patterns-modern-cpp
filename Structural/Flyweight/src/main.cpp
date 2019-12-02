#include <iostream>

#include "City.hpp"

int main()
{
    City city{};
    
    Person daniel = city.addPerson("Daniel", "Vieira");
    Person rafael = city.addPerson("Rafael", "Vieira");
    Person gabriel = city.addPerson("Gabriel", "Vieira");
    Person daniel2 = city.addPerson("Daniel", "Craviee");

    for(Person p : city.getPersons())
    {
        std::cout << p.getFName() << " " << p.getLName() << std::endl;
    }

    return 0;
}