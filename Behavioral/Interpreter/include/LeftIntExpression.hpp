#pragma once

#include <iostream>
#include "Expression.hpp"
#include "Token.hpp"
#include "BasicExpression.hpp"
#include "DoubleExpression.hpp"
#include "LRExpression.hpp"

class LeftIntExpression : public Expression
{
    public:
        LeftIntExpression(){};
        ~LeftIntExpression(){};
        int eval();
        int tryParse(int index, std::vector<Token> tokens);

    private:
        int value;
        Expression exp;
        TokenType operation;
        
};