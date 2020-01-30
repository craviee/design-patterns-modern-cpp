#include "Lexer.hpp"

void Lexer::finishIntegerToken(std::vector<Token>& rawTokens, std::string& currentAppend, bool& processingInteger)
{
    rawTokens.push_back(Token{TokenType::INTEGER, std::stoi(currentAppend)});
    currentAppend = "";
    processingInteger = false;   
}

std::vector<Token> Lexer::getTokens()
{
    std::vector<Token> rawTokens;
    std::string currentAppend = "";
    bool processingInteger = false;

    for(char c : expression)
    {
        if(c == '(')
        {
            if(processingInteger)
                finishIntegerToken(rawTokens, currentAppend, processingInteger); 
            rawTokens.push_back(Token{TokenType::LPAREN});
        }
        else if (c == ')')
        {
            if(processingInteger)
                finishIntegerToken(rawTokens, currentAppend, processingInteger); 
            rawTokens.push_back(Token{TokenType::RPAREN});
        }
        else if (c == '+')
        {
            if(processingInteger)
                finishIntegerToken(rawTokens, currentAppend, processingInteger); 
            rawTokens.push_back(Token{TokenType::PLUS});
        }
        else if (c == '-')
        {
            if(processingInteger)
                finishIntegerToken(rawTokens, currentAppend, processingInteger); 
            rawTokens.push_back(Token{TokenType::MINUS});
        }
        else if (std::isdigit(c))
        {
            processingInteger = true;
            currentAppend += c;
        }
    }

    if(processingInteger)
        finishIntegerToken(rawTokens, currentAppend, processingInteger); 

    return rawTokens;  
}