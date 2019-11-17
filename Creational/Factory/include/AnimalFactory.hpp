#pragma once

#include <string>

#include <Dog.hpp>
#include <Cat.hpp>

class AnimalFactory {

public:
    static Animal createAnimal(std::string type);

private:
    AnimalFactory();
};