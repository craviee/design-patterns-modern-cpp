#include "PrintLog.hpp"

void PrintLog::write(std::string message)
{
    std::cout << "LOG: " << message << std::endl;
}