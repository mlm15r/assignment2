//
// Created by mmolina on 10/4/2019.
//

#ifndef ASSIGNMENT2_JET_H
#define ASSIGNMENT2_JET_H

#include "PoweredVehicle.h"

class Car : public PoweredVehicle {

private:
    string myEngineSize;

public:
    Car();

    explicit Car   (string brand, string model, string fuelType,
                    string engineSize);

    virtual ~Car();
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //ASSIGNMENT2_JET_H
