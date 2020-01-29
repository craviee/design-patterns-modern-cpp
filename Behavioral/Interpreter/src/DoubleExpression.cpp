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