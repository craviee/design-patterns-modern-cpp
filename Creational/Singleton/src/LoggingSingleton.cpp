#include "LoggingSingleton.hpp"

LoggingSingleton::LoggingSingleton()
{
    std::cout << "Singleton: This code will run only once." << std::endl;
    std::cout << "*open log file on append mode*" << std::endl;
}

LoggingSingleton& LoggingSingleton::getInstance()
{
    static LoggingSingleton instance;
    return instance;
}

void LoggingSingleton::write(std::string msg)
{
    std::cout << msg << std::endl;
}