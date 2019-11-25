#pragma once

#include <string>
#include <iostream>

class OldCarProducer
{

    public:
        OldCarProducer(std::string _paint) : paint{_paint} {};
        void build(int number);

    private:
        std::string paint;
};