#include "Elf.hpp"

void Elf::sendMessage(std::string message, std::string to)
{
    std::cout << name << " tells " << mediator->name << ": " << message << std::endl;
    mediator->mediateMessage(name, message, to);
}
void Elf::receiveMessage(std::string message)
{
    std::cout << mediator->name << " told " << name << ": " << message << std::endl;
}