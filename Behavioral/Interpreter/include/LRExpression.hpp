#pragma once

#include "Expression.hpp"
#include "Token.hpp"

class LRExpression : public Expression
{
    public:
        LRExpression(TokenType lparen, Expression exp, TokenType rparen) : lparen{lparen}, exp{exp}, rparen{rparen}{};
        ~LRExpression();
        int eval();

    private:
        TokenType lparen,rparen;
        Expression exp;
};