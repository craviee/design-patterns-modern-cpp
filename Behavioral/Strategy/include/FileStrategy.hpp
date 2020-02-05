#pragma once

#include <iostream>

#include "DataStrategy.hpp"

class FileStrategy : public DataStrategy
{
    public:
        FileStrategy(){};
        ~FileStrategy(){};
        void loadData() override { std::cout << "LoadData from File" << std::endl; };
        void saveData() override { std::cout << "SaveData to File" << std::endl; };
};