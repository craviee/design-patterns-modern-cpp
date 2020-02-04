#pragma once

#include "Log.hpp"

class PrintLog : public Log
{
    public:
        PrintLog() : Log() {};
        ~PrintLog(){};
        void write(std::string message);
};