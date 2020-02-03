#include "Human.hpp"

void Human::mediateMessage(std::string from, std::string message, std::string to)
{
    for(auto& person : persons)
    {
        if(person->name == to)
        {
            std::cout << name << " receives the message from " << from <<" and try to send to " << to << std::endl;
            person->receiveMessage(message);
            break;
        }
    }
}