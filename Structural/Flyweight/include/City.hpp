#pragma once

#include <vector>
#include <algorithm>
#include <memory>

#include "Person.hpp"

class City
{
    public:
        City(){};
        Person addPerson(std::string fName, std::string lName);
        std::vector<Person> getPersons() { return persons; }
    private:
        std::vector<Person> persons;
        std::map<key, std::string> key2String;
        std::map<std::string, key> string2key;
};