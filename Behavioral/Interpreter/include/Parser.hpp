#pragma once

#include "Lexer.hpp"
#include "LRExpression.hpp"
#include "BasicExpression.hpp"
#include "LeftIntExpression.hpp"

class Parser
{
    public:
        Parser(std::vector<Token> tokens) : tokens{tokens}{};
        ~Parser(){};
        void makeParserTree();
        int eval();

    private:
        Expression root;
        std::vector<Token> tokens;
        int index = 0;
};