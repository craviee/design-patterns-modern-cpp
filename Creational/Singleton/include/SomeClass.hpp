#pragma once

#include "LoggingSingleton.hpp"

class SomeClass {

public:
    SomeClass(LoggingSingleton log) : log{log} {};
    void doSomething();
private:
    LoggingSingleton log;
};