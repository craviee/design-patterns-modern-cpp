#pragma once

#include "AnimalImage.hpp"

class DogImage : public AnimalImage
{
    public:
        DogImage() : AnimalImage() { std::cout << "Au Au Au" << std::endl; };
        ~DogImage(){};
        void saveVisitor(ImageVisitor* visitor) override {visitor->save(this);};
};