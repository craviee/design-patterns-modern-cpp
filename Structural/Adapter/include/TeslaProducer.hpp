#pragma once

#include <iostream>

#include "Producer.hpp"

class TeslaProducer : public Producer {

public:
    TeslaProducer() {};
    void produce(ColorEnum color);
};