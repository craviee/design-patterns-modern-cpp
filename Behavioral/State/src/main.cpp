#include <iostream>

#include "Authorization.hpp"

int main()
{
    Authorization securityDoor{"123456"};
    std::cout << "State: " << securityDoor.getCurrentState() << std::endl;
    securityDoor.tryPassword("123456");
    std::cout << "State: " << securityDoor.getCurrentState() << std::endl;
    securityDoor.tryPassword("0");
    std::cout << "State: " << securityDoor.getCurrentState() << std::endl;
    securityDoor.tryPassword("123");
    std::cout << "State: " << securityDoor.getCurrentState() << std::endl;
    securityDoor.tryPassword("123456");
    std::cout << "State: " << securityDoor.getCurrentState() << std::endl;
    securityDoor.tryPassword("123");
    std::cout << "State: " << securityDoor.getCurrentState() << std::endl;
    securityDoor.tryPassword("123");
    std::cout << "State: " << securityDoor.getCurrentState() << std::endl;
    securityDoor.tryPassword("123");
    std::cout << "State: " << securityDoor.getCurrentState() << std::endl;
    securityDoor.tryPassword("123");
    std::cout << "State: " << securityDoor.getCurrentState() << std::endl;
    securityDoor.tryPassword("123456");
    std::cout << "State: " << securityDoor.getCurrentState() << std::endl;

    return 0;
}