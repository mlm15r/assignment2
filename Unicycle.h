//
// Created by mmolina on 10/4/2019.
//

#ifndef ASSIGNMENT2_UNICYCLE_H
#define ASSIGNMENT2_UNICYCLE_H

#endif //ASSIGNMENT2_UNICYCLE_H


class Unicycle : public Vehicle {

private:


public:
    explicit Unicycle(string brand, string model);

    virtual ~Unicycle();
    virtual double mileageEstimate(double time);

    virtual string toString();
};
