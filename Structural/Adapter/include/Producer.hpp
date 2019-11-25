#pragma once

#include "ColorEnum.hpp"

class Producer
{
    virtual void produce(ColorEnum color) = 0;
};