#ifndef Skateboard_H
#define Skateboard_H

#include "Vehicle.h"

class Skateboard : public Vehicle {


public:
    explicit Skateboard (string brand, string model, int gearCount = 1);

    virtual ~Skateboard ();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif   //Skateboard_h

