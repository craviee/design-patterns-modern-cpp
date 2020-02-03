#pragma once

#include "AnimalImage.hpp"

class CatImage : public AnimalImage
{
    public:
        CatImage() : AnimalImage() { std::cout << "Meow" << std::endl; };
        ~CatImage(){};
        void saveVisitor(ImageVisitor* visitor) override {visitor->save(this);};
};