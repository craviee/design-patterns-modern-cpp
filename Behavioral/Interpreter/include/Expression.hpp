#pragma once

class Expression
{
    public:
        ~Expression(){};
        virtual int eval(){};

    protected:
        Expression(){};

};