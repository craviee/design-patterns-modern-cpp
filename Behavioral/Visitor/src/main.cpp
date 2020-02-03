#include <iostream>

#include "DogImage.hpp"
#include "CatImage.hpp"
#include "PNGVisitor.hpp"
#include "JPGVisitor.hpp"

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