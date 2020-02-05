#include "System.hpp"

int main()
{
    System system{};

    system.setStrategy("database");
    system.updateData();
    system.setStrategy("file");
    system.updateData();
    
    return 0;
}