//
// Created by mmolina on 10/4/2019.
//

#include "Jet.h"


Jet::Jet() {
    numberOfEngines =1;
    setBrand("unknown");
    setModel("unknown");
}

Jet::Jet(string brand, string model, string fuelType) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int num) {
    if (num >= 2){
        numberOfEngines = num;
        setFuelType("Rocket");
    }
    else
        numberOfEngines = 1;
}

double Jet::mileageEstimate(double time) {
    double mileage;
    double rnd = (100-40+1)*rand()/(RAND_MAX + 1);
    mileage = time * rnd;
    if (getNumberOfEngines()>=2){
        mileage += (mileage*0.55)*getNumberOfEngines();
        return mileage;
    }
    else
        return mileage;
}


stirng Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           getNumberOfEngines();
}