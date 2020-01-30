#include "BasicExpression.hpp"

int BasicExpression::eval()
{
    if(operation == TokenType::PLUS)
        return value1 + value2;
    else if(operation == TokenType::MINUS)
        return value1 - value2;
    else
    {
        std::cout << "OPS! SOMETHING WENT WRONG!\n" << "OPERATION INVALID" << std::endl; 
        return 0;
    }
}

int BasicExpression::tryParse(int index, std::vector<Token> tokens)
{
    if(index+2 < tokens.size() &&
    tokens[index].type == TokenType::INTEGER &&
    (tokens[index+1].type == TokenType::PLUS || tokens[index+1].type == TokenType::MINUS) &&
    tokens[index+2].type == TokenType::INTEGER)
    {
        value1 = tokens[index].number;
        operation = tokens[index+1].type;
        value2 = tokens[index+2].number;
        return index+3;
    }
    return -1;
}