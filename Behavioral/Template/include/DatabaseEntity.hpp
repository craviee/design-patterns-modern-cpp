#pragma once

#include <iostream>

template<typename T>
class DatabaseEntity
{
    public:
        ~DatabaseEntity(){};
        virtual void create() {};
        virtual T read() {};
        virtual void update() {};
        virtual void erase() {};
    protected:
        DatabaseEntity(){};
};