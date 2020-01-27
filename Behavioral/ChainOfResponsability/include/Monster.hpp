#pragma once

#include "Party.hpp"

class Monster {

private:
    Monster* next{nullptr};
public:
    Monster(Party& party) : party{party}{};
    ~Monster(){};
    int power;

    void add(Monster* monster);
    virtual void handle();

protected:
    Party& party;
};