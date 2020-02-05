#pragma once

#include "DatabaseEntity.hpp"

class Person : public DatabaseEntity<Person>
{
    public:
        Person(){};
        ~Person(){};
        void create() override;
        Person read() override;
        void update() override;
        void erase() override;
};