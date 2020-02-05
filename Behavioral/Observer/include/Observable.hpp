#pragma once

#include <vector>

#include "Observer.hpp"

template<typename T> class Observable
{
    public:
        Observable(){};
        ~Observable(){};
        void notify(T& source, std::string field)
        {
            for(auto observer : observers)
            {
                observer->onUpdate(source, field);
            }
        };
        void subscribe(Observer<T>* observer) { observers.push_back(observer); };
        void unsubscribe(Observer<T>* observer)
        {
            for(auto i = observers.begin(); i != observers.end(); i++)
            {
                if(*i == observer)
                {
                    observers.erase(i);
                    break;
                }
            }
        };
    private:
        std::vector<Observer<T>*> observers;
};