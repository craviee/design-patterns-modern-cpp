#pragma once

class CatImage;
class DogImage;

class ImageVisitor
{
    public:
        virtual void save(CatImage* image) = 0;
        virtual void save(DogImage* image) = 0;
};