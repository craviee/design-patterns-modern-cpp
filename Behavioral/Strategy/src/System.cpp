#include "System.hpp"

void System::updateData()
{
    strategy->loadData();
    std::cout << "Changing data..." << std::endl;
    strategy->saveData();
}

void System::setStrategy(std::string strategy)
{
    if(strategy == "database")
        this->strategy = std::make_unique<DatabaseStrategy>();
    else if(strategy == "file")
        this->strategy = std::make_unique<FileStrategy>();
}