#ifndef JET_H
#define JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numofEngines);


    virtual ~Jet();
    int getNumberOfEngines();
    void setNumberofEngines(int engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif  //JET_H


