#include <iostream>

// #include "DogImage.hpp"
// #include "PNGVisitor.hpp"
// #include "JPGVisitor.hpp"
// #include "CatImage.hpp"
// #include "ImageVisitor.hpp"

class ImageVisitor;

class AnimalImage
{
    public:
        virtual void saveVisitor(ImageVisitor* visitor) = 0;
};

class CatImage;
class DogImage;

class ImageVisitor
{
    public:
        virtual void save(CatImage* image) = 0;
        virtual void save(DogImage* image) = 0;
};

class CatImage : public AnimalImage
{
    public:
        CatImage() { std::cout << "Meow" << std::endl; };
        ~CatImage(){};
        void saveVisitor(ImageVisitor* visitor) override {visitor->save(this);};
};

class DogImage : public AnimalImage
{
    public:
        DogImage() { std::cout << "Au Au Au" << std::endl; };
        ~DogImage(){};
        void saveVisitor(ImageVisitor* visitor) override {visitor->save(this);};
};

class JPGVisitor : public ImageVisitor
{
    public:
        JPGVisitor(){};
        ~JPGVisitor(){};
        void save(CatImage* image) override { std::cout << "Saving CatImage.jpg" << std::endl; };
        void save(DogImage* image) override { std::cout << "Saving DogImage.jpg" << std::endl; };
};

class PNGVisitor : public ImageVisitor
{
    public:
        PNGVisitor(){};
        ~PNGVisitor(){};
        void save(CatImage* image) override { std::cout << "Saving CatImage.png" << std::endl; };
        void save(DogImage* image) override { std::cout << "Saving DogImage.png" << std::endl; };
};

int main()
{
    DogImage dog{};
    CatImage cat{};

    PNGVisitor png{};
    JPGVisitor jpg{};

    dog.saveVisitor(&png);
    dog.saveVisitor(&jpg);
    cat.saveVisitor(&png);
    cat.saveVisitor(&jpg);

    return 0;
}