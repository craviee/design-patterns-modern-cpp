#pragma once

#include "Lexer.hpp"

class Parser {

public:
    Parser(std::vector<Token> tokens);
    ~Parser();
    int eval();
};