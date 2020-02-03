#include "Dwarf.hpp"

void Dwarf::sendMessage(std::string message, std::string to)
{
    std::cout << name << " tells " << mediator->name << ": " << message << std::endl;
    mediator->mediateMessage(name, message, to);
}
void Dwarf::receiveMessage(std::string message)
{
    std::cout << mediator->name << " tells " << name << ": " << message << std::endl;
}