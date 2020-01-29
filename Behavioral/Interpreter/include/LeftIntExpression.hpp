#pragma once

#include <iostream>
#include "Expression.hpp"
#include "Token.hpp"

class LeftIntExpression : public Expression
{
    public:
        LeftIntExpression(int value, TokenType operation, Expression exp) : exp{exp}, operation{operation}, value{value}{};
        ~LeftIntExpression();
        int eval();

    private:
        TokenType operation;
        int value;
        Expression exp;
};