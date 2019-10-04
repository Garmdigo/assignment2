#include "Skateboard.h"
#include <ctime>
#include <cstdlib>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double dtime) {
    srand( unsigned(time(0)));
    double random=(rand()%5)/10 +0.1;
     double  storage =0;
    while(dtime>0)
    {
        if(dtime>24&&dtime<251)
        {

          int tracker= dtime/3;
          int random2=rand()%tracker +1;
          storage+=random+random2;
          dtime=-1;
        }
        else
        storage+=random;
        dtime=-1;
     }
    return storage;
}


string Skateboard::toString() 
{
    return "Skateboard\n" + Vehicle::toString()+"Mileage: "+mileageEstimate;
}
