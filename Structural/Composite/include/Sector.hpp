#pragma once

#include "HierarchyComposite.hpp"
#include <vector>

class Sector : public HierarchyComposite
{
    public:
        Sector(std::string _name, double _value = 0) : HierarchyComposite{_name, _value} {};
        std::vector<HierarchyComposite*> items;
        double calculateValue();
};