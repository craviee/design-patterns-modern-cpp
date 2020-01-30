#include "LeftIntExpression.hpp"

int LeftIntExpression::eval()
{
    if(operation == TokenType::PLUS)
        return value + exp.eval();
    else if(operation == TokenType::MINUS)
        return value - exp.eval();
    else
    {
        std::cout << "OPS! SOMETHING WENT WRONG!\n" << "OPERATION INVALID" << std::endl; 
        return 0;
    }
}

int LeftIntExpression::tryParse(int index, std::vector<Token> tokens)
{
    int returnValue;

    if(index+2 < tokens.size() &&
    tokens[index].type == TokenType::INTEGER &&
    (tokens[index+1].type == TokenType::PLUS || tokens[index+1].type == TokenType::MINUS))
    {
        BasicExpression basicExp{};
        LeftIntExpression leftExp{};
        LRExpression LRExp{};
        DoubleExpression doubleExp{};

        value = tokens[index].number;
        operation = tokens[index+1].type;

        returnValue = basicExp.tryParse(index+2, tokens);
        if(returnValue >= 0)
        {
            exp.evalValue = basicExp.eval();
            return returnValue;
        }

        returnValue = leftExp.tryParse(index+2, tokens);
        if(returnValue >= 0)
        {
            exp.evalValue = leftExp.eval();
            return returnValue;
        }

        returnValue = LRExp.tryParse(index+2, tokens);
        if(returnValue >= 0)
        {
            exp.evalValue = LRExp.eval();
            return returnValue;
        }

        returnValue = doubleExp.tryParse(index+2, tokens);
        if(returnValue >= 0)
        {
            exp.evalValue = doubleExp.eval();
            return returnValue;
        }
    }

    return -1;
}