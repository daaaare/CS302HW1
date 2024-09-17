//Creates a class vector of people and a double fare
//Then takes everything from itransporter and gets used
//creates own functions not taken from virtual function setFare() and totalFare()
//the displayPassengers() function has the ability to display passengers name and height using a for loop 

#ifndef BUS_H
#define BUS_H

#include "itransporter.h"
#include "people.h"
#include <vector>

class Bus : public Transporter<People> {
    private:
    std::vector<People> pvec;
    double fare = 0;

    public:
    void load(People person) override;
    void unload() override;
    void empty() override;
    bool isEmpty() override;
    int count() override;
    void move() override;
    void setFare(double f);
    double totalFare();
    void displayPassengers();
};

#endif