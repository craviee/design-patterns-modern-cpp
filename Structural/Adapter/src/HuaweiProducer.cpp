#include "HuaweiProducer.hpp"

void HuaweiProducer::produce(ColorEnum color)
{
    if(color == ColorEnum::Black)
        std::cout << "Producing new Huawei Car of the color Black." << std::endl;
    else if (color == ColorEnum::Gray)
        std::cout << "Producing new Huawei Car of the color Gray." << std::endl;
    else if (color == ColorEnum::White)
        std::cout << "Producing new Huawei Car of the color White." << std::endl;
    else if (color == ColorEnum::Green)
        std::cout << "Producing new Huawei Car of the color Green." << std::endl;
    else if (color == ColorEnum::Blue)
        std::cout << "Producing new Huawei Car of the color Blue." << std::endl;
    else if (color == ColorEnum::Red)
        std::cout << "Producing new Huawei Car of the color Red." << std::endl;
}