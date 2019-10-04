#include "Motorcycle.h"


Motorcycle::Motorcycle(string brand, string model, int gearCount) {
    setBrand(brand);
    setModel(model);
    setGearCount(gearCount);
}

Motorcycle::~Motorcycle() = default;

int Motorcycle::getGearCount() {
    return myGearCount;
}

void Motorcycle::setGearCount(int gearCount) {
    myGearCount = gearCount;
}

double Motorcycle::mileageEstimate(double time) {
        double mileage=0;
        if(getGearCount()>=2)
         mileage = 15 *time;
        else
        mileage = 10 * time;
    return mileage;
}

string Motorcycle::toString() {
    string s = "Motorcycle\n\t";
    return "->Motorcycle\n" + Vehicle::toString() + "\n\tGears: " +
           to_string(myGearCount);
}
