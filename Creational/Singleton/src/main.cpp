#include <iostream>

#include "LoggingSingleton.hpp"
#include "SomeClass.hpp"

int main()
{
    // If singleton needs to be used, the best way to use it is by depedency injection
    SomeClass class1{LoggingSingleton::getInstance()};
    SomeClass class2{LoggingSingleton::getInstance()};
    
    class1.doSomething();

    class2.doSomething();

    return 0;
}