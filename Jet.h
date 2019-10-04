//
// Created by mmolina on 10/4/2019.
//

#ifndef ASSIGNMENT2_JET_H
#define ASSIGNMENT2_JET_H

#include "PoweredVehicle.h"
#include <cstdlib>

class Jet : public PoweredVehicle {

private:
    int numberOfEngines = 1;

public:
    Jet ();

    explicit Jet (string brand, string model, string fuelType);

    virtual ~Jet();
    int getNumberOfEngines();
    void setNumberOfEngines (int num);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //ASSIGNMENT2_JET_H
