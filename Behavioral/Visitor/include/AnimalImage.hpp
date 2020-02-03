#pragma once

#include <iostream>

#include "ImageVisitor.hpp"

class AnimalImage
{
    public:
        virtual void saveVisitor(ImageVisitor* visitor) = 0;

    protected:
        AnimalImage(){};
        ~AnimalImage(){};
};