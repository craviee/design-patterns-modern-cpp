#pragma once

#include "ImageVisitor.hpp"

class JPGVisitor : public ImageVisitor
{
    public:
        JPGVisitor(){};
        ~JPGVisitor(){};
        void save(CatImage* image) override { std::cout << "Saving CatImage.jpg" << std::endl; };
        void save(DogImage* image) override { std::cout << "Saving DogImage.jpg" << std::endl; };
};