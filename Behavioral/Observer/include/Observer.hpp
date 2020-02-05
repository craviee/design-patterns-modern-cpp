#pragma once

#include <string>

template<typename T> class Observer
{
    public:
        Observer(){};
        ~Observer(){};
        virtual void onUpdate(T& source, std::string field) = 0;
};