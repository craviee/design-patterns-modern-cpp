#pragma once

#include "DatabaseEntity.hpp"

class City : public DatabaseEntity<City>
{
    public:
        City(){};
        ~City(){};
        void create() override;
        City read() override;
        void update() override;
        void erase() override;
};