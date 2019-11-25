#pragma once

#include <iostream>

#include "Producer.hpp"
#include "TeslaProducer.hpp"
#include "HuaweiProducer.hpp"
#include "OldCarProducer.hpp"

class CarProducerAdapter : public Producer {

public:
    CarProducerAdapter(std::string _producer) : producer(_producer) {};
    void produce(ColorEnum color);
private:
    std::string producer;
};