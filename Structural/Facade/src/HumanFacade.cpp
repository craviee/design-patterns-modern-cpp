#include "HumanFacade.hpp"

void HumanFacade::feedDog()
{
    Dog dog;
    PremiumDogFood dogFood;
    SmallDogBow bow{dogFood};
    dog.eat(bow);
}