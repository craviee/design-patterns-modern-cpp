#pragma once

#include "Expression.hpp"
#include "Token.hpp"
#include "BasicExpression.hpp"
#include "LeftIntExpression.hpp"
#include "DoubleExpression.hpp"

class LRExpression : public Expression
{
    public:
        LRExpression(){};
        ~LRExpression(){};
        int eval();
        int tryParse(int index, std::vector<Token> tokens);

    private:
        Expression exp;
        TokenType lparen,rparen;

};