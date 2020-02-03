// #include <string>
// #include <iostream>
// #include <vector>

// class Mediator;

// class AggressiveRace {

// public:
//     ~AggressiveRace(){};
//     virtual void sendMessage(std::string message, std::string to) = 0;
//     std::string name;
//     Mediator* mediator;
//     virtual void receiveMessage(std::string message) = 0;

// protected:
//     AggressiveRace(std::string name) : name{name} {};
    
// };

// class AggressiveRace;

// class Mediator {

// public:
//     Mediator(std::string name) : name{name} {};
//     ~Mediator(){};
//     virtual void mediateMessage(std::string from, std::string message, std::string to) = 0;
//     void startFriendship(AggressiveRace* person);//{ person->mediator = this; persons.push_back(person); };
//     std::string name;

// protected:
//     std::vector<AggressiveRace*> persons;
// };

// void Mediator::startFriendship(AggressiveRace* person)
// {
//     person->mediator = this;
//     persons.push_back(person);
// }

// class Human : public Mediator {

// public:
//     Human(std::string name) : Mediator(name) {};
//     ~Human(){};
//     void mediateMessage(std::string from, std::string message, std::string to);
//     void startFriendship(AggressiveRace* person);
// };

// void Human::mediateMessage(std::string from, std::string message, std::string to)
// {
//     for(auto& person : persons)
//     {
//         if(person->name == "to")
//         {
//             std::cout << name << " receives the message and try to send to " << to << std::endl;
//             person->receiveMessage(message);
//             break;
//         }
//     }
// }

// class Dwarf : public AggressiveRace {

// public:
//     Dwarf(std::string name) : AggressiveRace(name){};
//     ~Dwarf(){};
//     void sendMessage(std::string message, std::string to);
//     void receiveMessage(std::string message);
// };

// void Dwarf::sendMessage(std::string message, std::string to)
// {
//     std::cout << name << " tells " << mediator->name << ": " << message << std::endl;
//     mediator->mediateMessage(name, message, to);
// }
// void Dwarf::receiveMessage(std::string message)
// {
//     std::cout << mediator->name << " tells " << name << ": " << message << std::endl;
// }

// class Elf : public AggressiveRace {

// public:
//     Elf(std::string name) : AggressiveRace(name){};
//     ~Elf(){};
//     void sendMessage(std::string message, std::string to);
//     void receiveMessage(std::string message);
// };

// void Elf::sendMessage(std::string message, std::string to)
// {
//     mediator->mediateMessage(name, message, to);
// }
// void Elf::receiveMessage(std::string message)
// {
//     std::cout << mediator->name << " told " << name << ": " << message << std::endl;
// }
#include "Dwarf.hpp"
#include "Elf.hpp"
#include "Human.hpp"

int main()
{
    Dwarf dwarf{"dwarf"};
    Elf elf{"elf"};
    Human human{"human"};

    human.startFriendship(&dwarf);
    human.startFriendship(&elf);

    elf.sendMessage("plz, sell gold!", "dwarf");

    return 0;
}