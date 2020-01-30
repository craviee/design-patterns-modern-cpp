#include <iostream>
#include "Lexer.hpp"
#include "Parser.hpp"

int main()
{
    Lexer l{"(5+2+1)-(8-3)"};
    auto tokens = l.getTokens();
    Parser parser{tokens};
    parser.makeParserTree();
    std::cout << "Value: " << parser.eval() << std::endl;

    return 0;
}