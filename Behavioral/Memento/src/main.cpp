#include <iostream>

#include "Human.hpp"

int main()
{
    Human john{100};
    std::cout << "john has " << john.getLife() << " of Life" << std::endl;
    auto undo1 = john.takeDamage(25);
    std::cout << "john has " << john.getLife() << " of Life" << std::endl;
    auto undo2 = john.takeDamage(30);
    std::cout << "john has " << john.getLife() << " of Life" << std::endl;
    john.restore(undo1);
    std::cout << "john has " << john.getLife() << " of Life" << std::endl;
    john.restore(undo2);
    std::cout << "john has " << john.getLife() << " of Life" << std::endl;
    return 0;
}