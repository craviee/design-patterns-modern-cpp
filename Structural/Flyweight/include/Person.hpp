#pragma once

#include <cstdint>
#include <string>
#include <map>

typedef uint32_t key;

class Person
{
    public:
        Person(key fName, key lName, std::map<key, std::string>& map) : fName{fName}, lName{lName}, map{map} {};
        std::string getFName();
        std::string getLName();
    private:
        std::map<key, std::string>& map;
        key fName, lName;

};