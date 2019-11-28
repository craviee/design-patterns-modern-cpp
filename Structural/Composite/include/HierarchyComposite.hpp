#pragma once

#include <iostream>

class HierarchyComposite {
    public:
        virtual double calculateValue() = 0;
        std::string name = "";
        double value = 0;
    protected:
        HierarchyComposite(std::string _name, double _value = 0) { name = _name; value = _value; };
};