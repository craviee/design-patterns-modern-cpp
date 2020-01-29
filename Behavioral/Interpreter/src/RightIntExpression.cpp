#include "RightIntExpression.hpp"

int RightIntExpression::eval()
{
    if(operation == TokenType::PLUS)
        return exp.eval() + value;
    else if(operation == TokenType::MINUS)
        return exp.eval() - value;
    else
    {
        std::cout << "OPS! SOMETHING WENT WRONG!\n" << "OPERATION INVALID" << std::endl; 
        return 0;
    }
}       