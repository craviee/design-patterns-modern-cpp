#pragma once

#include <iostream>

#include "Producer.hpp"

class HuaweiProducer : public Producer {

public:
    HuaweiProducer() {};
    void produce(ColorEnum color);
};