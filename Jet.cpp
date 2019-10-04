#include "Jet.h"
#include <ctime>
#include <cstdlib> 
#include <string>
#include <math.h>

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numOfEngines=1) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberofEngines(numOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberofEngines(int engine)
{
    numberOfEngines = engine;
}

double Jet::mileageEstimate(double dtime) {
        srand(unsigned(time(0)));
        int random=floor(rand()%61)+40; //random generator
        int store=0; //special case below
    if (fuelType == "Rocket"&& getNumberOfEngines()>2) {
       while(dtime>=1)//increment it per minutes
           {
                dtime-=1;
                store=store+random *(getNumberOfEngines() *.055) ;
           }
    }
    else
        {
           while(dtime>=1) //while it is a minute or longer
           {
                dtime-=1;
                store+=random;

           }
        }

    return store; //from project description ntoes
}


string Jet::toString() {
    return "-> Car\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           to_string(getNumberOfEngines());
}
	
