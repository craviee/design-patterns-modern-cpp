#pragma once

#include <vector>
#include "Token.hpp"

class Expression
{
    public:
        Expression(){};
        ~Expression(){};
        virtual int eval(){ return evalValue; };
        virtual int tryParse(int index, std::vector<Token> tokens){ return -1; };
        int evalValue;
};