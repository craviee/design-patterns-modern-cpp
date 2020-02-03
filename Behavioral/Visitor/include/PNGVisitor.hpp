#pragma once

#include "ImageVisitor.hpp"

class PNGVisitor : public ImageVisitor
{
    public:
        PNGVisitor(){};
        ~PNGVisitor(){};
        void save(CatImage* image) override { std::cout << "Saving CatImage.png" << std::endl; };
        void save(DogImage* image) override { std::cout << "Saving DogImage.png" << std::endl; };
};