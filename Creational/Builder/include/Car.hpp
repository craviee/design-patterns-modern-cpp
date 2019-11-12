#pragma once

#include <string>

class Car {

public:
    int getNumberOfWheels() { return wheels; }
    std::string getColor() { return paint; }
    bool hasMotor() { return motor; }

protected:
    Car() {}
    void addWheel() { wheels++; }
    void addMotor() { motor=true; }
    void addPaint(std::string _paint) { paint = _paint; }
    void reset() { wheels=0; motor=false; paint="no paint"; }

private:
    int wheels=0;
    bool motor=false;
    std::string paint="no paint";
    friend class CarBuilder;
};