#pragma once

#include <vector>
#include <string>
#include <cctype>
#include <iostream>
#include "Token.hpp"

class Lexer
{
    public:
        Lexer(std::string expression) : expression{expression} {};
        ~Lexer(){};
        std::vector<Token> getTokens();

    private:
        void finishIntegerToken(std::vector<Token>& rawTokens, std::string& currentAppend, bool& processingInteger);
        std::string expression;
};