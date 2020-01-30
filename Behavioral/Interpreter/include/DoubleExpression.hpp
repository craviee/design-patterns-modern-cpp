#pragma once

#include <iostream>
#include "Expression.hpp"
#include "Token.hpp"
#include "BasicExpression.hpp"
#include "LeftIntExpression.hpp"
#include "LRExpression.hpp"
class DoubleExpression : public Expression
{
    public:
        DoubleExpression(){};
        ~DoubleExpression(){};
        int eval();
        int tryParse(int index, std::vector<Token> tokens);
        int trySecondParse(int ret, std::vector<Token> tokens);

    private:
        Expression exp1,exp2;
        TokenType operation;
        
};