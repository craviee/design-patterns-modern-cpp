#include "Mediator.hpp"

void Mediator::startFriendship(AggressiveRace* person)
{
    person->mediator = this;
    persons.push_back(person);
}