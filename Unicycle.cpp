//
// Created by mmolina on 10/4/2019.
//


#include "Unicycle.h"

Unicycle::Unicycle(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Unicycle ::~Unicycle() = default;

double Skateboard ::mileageEstimate(double time) {
    double mileage = time * 0.1;
    return mileage;
}

string Unicycle::toString() {
    string s = "-> Unicycle\n\t";
    return "-> Unicycle\n" + Vehicle::toString();
}
