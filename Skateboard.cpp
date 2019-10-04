//
// Created by mmolina on 10/4/2019.
//

#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard ::~Skateboard() = default;

double Skateboard ::mileageEstimate(double time) {
    double rnd = (0.5-0.1+0.1)*rand()/(RAND_MAX + 1);
    double mileage=rnd*time;
    if (time > 25 && time < 250){
        mileage += mileage/3;
    }
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}