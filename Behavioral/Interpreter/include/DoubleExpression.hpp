#pragma once

#include <iostream>
#include "Expression.hpp"
#include "Token.hpp"

class DoubleExpression : public Expression
{
    public:
        DoubleExpression(Expression exp1, TokenType operation , Expression exp2) : exp{exp1}, operation{operation}, exp2{exp2}{};
        ~DoubleExpression();
        int eval();

    private:
        TokenType operation;
        Expression exp1,exp2;
};