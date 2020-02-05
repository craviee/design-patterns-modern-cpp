#pragma once

#include <iostream>

#include "DataStrategy.hpp"

class DatabaseStrategy : public DataStrategy
{
    public:
        DatabaseStrategy(){};
        ~DatabaseStrategy(){};
        void loadData() override { std::cout << "LoadData from Database" << std::endl; };
        void saveData() override { std::cout << "SaveData to Database" << std::endl; };
};