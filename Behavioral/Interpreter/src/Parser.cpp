#include "Parser.hpp"

void Parser::makeParserTree()
{
    BasicExpression basicExp{};
    LeftIntExpression leftExp{};
    LRExpression LRExp{};
    DoubleExpression doubleExp{};

    if(basicExp.tryParse(0, tokens) == tokens.size())
    {
        root.evalValue = basicExp.eval();

    }
    else if(leftExp.tryParse(0, tokens) == tokens.size())
    {
        root.evalValue = leftExp.eval();
    }
    else if(LRExp.tryParse(0, tokens) == tokens.size())
    {
        root.evalValue = LRExp.eval();
    }
    else if(doubleExp.tryParse(0, tokens) == tokens.size())
    {
        root.evalValue = doubleExp.eval();
    }
}       

int Parser::eval()
{
    return root.eval();
}