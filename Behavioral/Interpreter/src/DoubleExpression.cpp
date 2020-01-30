#include "DoubleExpression.hpp"

int DoubleExpression::eval()
{
    if(operation == TokenType::PLUS)
        return exp1.eval() + exp2.eval();
    else if(operation == TokenType::MINUS)
        return exp1.eval() - exp2.eval();
    else
    {
        std::cout << "OPS! SOMETHING WENT WRONG!\n" << "OPERATION INVALID" << std::endl; 
        return 0;
    }
}

int DoubleExpression::trySecondParse(int ret, std::vector<Token> tokens)
{
    int secondRet;
    BasicExpression secondBasicExp{};
    LeftIntExpression secondLeftExp{};
    LRExpression secondLRExp{};
    DoubleExpression secondDoubleExp{};

    secondRet = secondBasicExp.tryParse(ret+1, tokens);
    if(secondRet >= 0)
    {
        exp2.evalValue = secondBasicExp.eval();
        return secondRet;
    }

    secondRet = secondLeftExp.tryParse(ret+1, tokens);
    if(secondRet >= 0)
    {
        exp2.evalValue = secondLeftExp.eval();
        return secondRet;
    }

    secondRet = secondLRExp.tryParse(ret+1, tokens);
    if(secondRet >= 0)
    {
        exp2.evalValue = secondLRExp.eval();
        return secondRet;
    }

    secondRet = secondDoubleExp.tryParse(ret+1, tokens);
    if(secondRet >= 0)
    {
        exp2.evalValue = secondDoubleExp.eval();
        return secondRet;
    }

    return -1;
}

int DoubleExpression::tryParse(int index, std::vector<Token> tokens)
{
    int ret,secondRet;

    BasicExpression basicExp{};
    LeftIntExpression leftExp{};
    LRExpression lrExp{};
    DoubleExpression doubleExp{};

    if(index <= tokens.size())
    {
        ret = basicExp.tryParse(index, tokens);
        if(ret >= 0 && ret+1 < tokens.size() &&
        (tokens[ret].type == TokenType::PLUS || tokens[ret].type == TokenType::MINUS))
        {
            exp1.evalValue = basicExp.eval();
            operation = tokens[ret].type;
            secondRet = trySecondParse(ret, tokens);
            if(secondRet != -1)
                return secondRet;
        }

        ret = leftExp.tryParse(index, tokens);
        if(ret >= 0 && ret+1 < tokens.size() &&
        (tokens[ret].type == TokenType::PLUS || tokens[ret].type == TokenType::MINUS))
        {
            exp1.evalValue = leftExp.eval();
            operation = tokens[ret].type;
            secondRet = trySecondParse(ret, tokens);
            if(secondRet != -1)
                return secondRet;
        }
        
        ret = lrExp.tryParse(index, tokens);
        if(ret >= 0 && ret+1 < tokens.size() &&
        (tokens[ret].type == TokenType::PLUS || tokens[ret].type == TokenType::MINUS))
        {
            exp1.evalValue = lrExp.eval();
            operation = tokens[ret].type;
            secondRet = trySecondParse(ret, tokens);
            if(secondRet != -1)
                return secondRet;
        }

        ret = doubleExp.tryParse(index, tokens);
        if(ret >= 0 && ret+1 < tokens.size() &&
        (tokens[ret].type == TokenType::PLUS || tokens[ret].type == TokenType::MINUS))
        {
            exp1.evalValue = doubleExp.eval();
            operation = tokens[ret].type;
            secondRet = trySecondParse(ret, tokens);
            if(secondRet != -1)
                return secondRet;
        }
    }
    
    return -1;
}