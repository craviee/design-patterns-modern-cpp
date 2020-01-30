#pragma once

#include "TokenType.hpp"
#include <string>

class Token
{
    public:
        Token(TokenType type) : type{type}{};
        Token(TokenType _type, int _number)
        {
            if(_type == TokenType::INTEGER)
            {
                type = _type;
                number = _number;
            }
        };
        ~Token(){};
        std::string toStr()
        {
            if(type == TokenType::INTEGER)
                return "INTEGER -> " + std::to_string(number);
            else if(type == TokenType::RPAREN)
                return "RPAREN";
            else if(type == TokenType::LPAREN)
                return "LPAREN";
            else if(type == TokenType::MINUS)
                return "MINUS";
            else if(type == TokenType::PLUS)
                return "PLUS";
            else if(type == TokenType::END)
                return "END";
            else
                return "????";
        }
        TokenType type;
        int number;
};