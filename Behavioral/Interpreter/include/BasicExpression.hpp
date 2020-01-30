#pragma once

#include <iostream>
#include "Expression.hpp"
#include "Token.hpp"

class BasicExpression : public Expression
{
    public:
        BasicExpression(){};
        ~BasicExpression(){};
        int eval();
        int tryParse(int index, std::vector<Token> tokens);

    private:
        int value1, value2;
        TokenType operation;
        
};