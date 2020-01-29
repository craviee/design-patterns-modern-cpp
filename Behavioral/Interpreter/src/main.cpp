#include <iostream>
#include "Lexer.hpp"

int main()
{
    Lexer l{"31+(5-4)"};
    auto tokens = l.getTokens();
    for(auto token : tokens)
        std::cout << "main: " << token.toStr() << std::endl;
    return 0;
}