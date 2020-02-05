#pragma once

#include <string>
#include <iostream>
#include <memory>

#include "DatabaseStrategy.hpp"
#include "FileStrategy.hpp"

class System
{
    public:
        System(){};
        ~System(){};
        void updateData();
        void setStrategy(std::string strategy);

    private:
        std::unique_ptr<DataStrategy> strategy;
};