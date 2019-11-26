#include "CompanyTraveler.hpp"

void CompanyTraveler::doTravel()
{
    std::cout << "Company Traveler object does not know which subclass of TravelMethod will be called" << std::endl;
    method->startTravel();
}