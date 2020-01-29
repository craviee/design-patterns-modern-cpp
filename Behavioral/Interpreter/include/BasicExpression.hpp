#pragma once

#include <iostream>
#include "Expression.hpp"
#include "Token.hpp"

class BasicExpression : public Expression
{
    public:
        BasicExpression(int value1, TokenType operation, int value2) : value1{value1}, operation{operation}, value2{value2}{};
        ~BasicExpression();
        int eval();

    private:
        TokenType operation;
        int value1, value2;
};