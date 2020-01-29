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