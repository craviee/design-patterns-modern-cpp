#pragma once

#include "Log.hpp"

class NullLog : public Log
{
    public:
        NullLog() : Log() {};
        ~NullLog(){};
        void write(std::string message){};
};