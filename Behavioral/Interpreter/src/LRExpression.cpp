#include "LRExpression.hpp"

int LRExpression::eval()
{
    return exp.eval();
}

int LRExpression::tryParse(int index, std::vector<Token> tokens)
{
    int returnValue;

    if(index+1 < tokens.size() &&
    tokens[index].type == TokenType::LPAREN)
    {
        BasicExpression basicExp{};
        LeftIntExpression leftExp{};
        LRExpression LRExp{};
        DoubleExpression doubleExp{};

        returnValue = basicExp.tryParse(index+1, tokens);
        if(returnValue >= 0 && returnValue < tokens.size() &&
        tokens[returnValue].type == TokenType::RPAREN)
        {
            exp.evalValue = basicExp.eval();
            return returnValue+1;
        }
     
        returnValue = leftExp.tryParse(index+1, tokens);
        if(returnValue >= 0 && returnValue < tokens.size() &&
        tokens[returnValue].type == TokenType::RPAREN)
        {
            exp.evalValue = leftExp.eval();
            return returnValue+1;
        }

        returnValue = LRExp.tryParse(index+1, tokens);
        if(returnValue >= 0 && returnValue < tokens.size() &&
        tokens[returnValue].type == TokenType::RPAREN)
        {
            exp.evalValue = LRExp.eval();
            return returnValue+1;
        }

        returnValue = doubleExp.tryParse(index+1, tokens);
        if(returnValue >= 0 && returnValue < tokens.size() &&
        tokens[returnValue].type == TokenType::RPAREN)
        {
            exp.evalValue = doubleExp.eval();
            return returnValue+1;
        }
    }
    return -1;
}