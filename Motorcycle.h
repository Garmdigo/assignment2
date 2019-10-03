#ifndef Motorcycle_H
#define Motorcycle_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {

private:
    int myGearCount;

public:
    explicit Motorcycle(string brand, string model, int gearCount = 1);

    virtual ~Motorcycle();
    int getGearCount();
    void setGearCount(int gearCount);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif 
