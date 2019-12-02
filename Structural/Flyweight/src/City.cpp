#include "City.hpp"

Person City::addPerson(std::string fName, std::string lName)
{
    key fNameKey, lNameKey;

    std::for_each(fName.begin(), fName.end(), [](char & c){c = ::toupper(c);});
    std::for_each(lName.begin(), lName.end(), [](char & c){c = ::toupper(c);});


    if(string2key.find(fName) == string2key.end())
    {
        key2String.emplace(static_cast<key>(key2String.size()+1), fName);
        string2key.emplace(fName, static_cast<key>(string2key.size()+1));
    }

    if(string2key.find(lName) == string2key.end())
    {
        key2String.emplace(static_cast<key>(key2String.size()+1), lName);
        string2key.emplace(lName, static_cast<key>(string2key.size()+1));
    }

    fNameKey = string2key[fName];
    lNameKey = string2key[lName];

    Person p{fNameKey, lNameKey, key2String};

    persons.push_back(p);

    return p;

}