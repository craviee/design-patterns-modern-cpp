#pragma once

#include <iostream>
#include "Expression.hpp"
#include "Token.hpp"

class RightIntExpression : public Expression
{
    public:
        RightIntExpression(Expression exp, TokenType operation ,int value) : exp{exp}, operation{operation}, value{value}{};
        ~RightIntExpression();
        int eval();

    private:
        TokenType operation;
        int value;
        Expression exp;
};