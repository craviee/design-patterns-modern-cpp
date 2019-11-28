#pragma once

#include "HierarchyComposite.hpp"

class Employee : public HierarchyComposite
{
    public:
        Employee(std::string _name, double _value = 0) : HierarchyComposite{_name, _value} {};
        double calculateValue();
};