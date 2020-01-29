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