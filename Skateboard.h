//
// Created by mmolina on 10/4/2019.
//


#include "Vehicle.h"
#include <cstdlib>

class Skateboard : public Vehicle {

private:


public:
    explicit Skateboard(string brand, string model);

    virtual ~Skateboard();
    virtual double mileageEstimate(double time);

    virtual string toString();
};
