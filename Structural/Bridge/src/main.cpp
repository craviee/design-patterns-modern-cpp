#include <iostream>
#include <memory>

#include "CompanyTraveler.hpp"
#include "PlaneTravel.hpp"
#include "TrainTravel.hpp"

int main()
{
    auto plane = std::make_shared<PlaneTravel>();
    auto train = std::make_shared<TrainTravel>();
    CompanyTraveler traveler{std::static_pointer_cast<TravelMethod>(plane)};
    CompanyTraveler anotherTraveler{std::static_pointer_cast<TravelMethod>(train)};
    traveler.doTravel();
    plane->price = 400;
    traveler.doTravel();
    anotherTraveler.doTravel();

    return 0;
}