#pragma once

#include <iostream>

class LoggingSingleton {

public:
    static LoggingSingleton& getInstance();
    void operator=(LoggingSingleton const&) = delete;
    void write(std::string msg);

private:
    LoggingSingleton();
};