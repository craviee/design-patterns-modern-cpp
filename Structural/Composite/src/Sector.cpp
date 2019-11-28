#include "Sector.hpp"

double Sector::calculateValue()
{
    double sum = value;

    for(const auto& item : items)
        sum += item->calculateValue();

    return sum;
}