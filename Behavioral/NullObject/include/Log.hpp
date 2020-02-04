#pragma once

#include <iostream>

class Log
{
    public:
        ~Log(){};
        virtual void write(std::string message) = 0;
    protected:
        Log(){};
};