#include <iostream>

#include "CarProducerAdapter.hpp"

int main()
{
    CarProducerAdapter tesla{"Tesla"};
    CarProducerAdapter huawei{"Huawei"};
    CarProducerAdapter oldCar{"Old Car"};

    tesla.produce(ColorEnum::Green);
    huawei.produce(ColorEnum::Red);
    oldCar.produce(ColorEnum::Black);

    return 0;
}