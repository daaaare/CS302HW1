//creates a class vector and a total weight number
//takes from the transporter virtual function afterwards
//display cargo outputs all cargo inside of vector outputting its name and weight

#ifndef TRAIN_H
#define TRAIN_H

#include "itransporter.h"
#include "cargo.h"
#include <vector>

class Train : public Transporter<Cargo> {
    private:
    std::vector<Cargo> cargo;
    double totalWeight = 0;

    public: 
    void load(Cargo item) override;
    void unload() override;
    void empty() override;
    bool isEmpty() override;
    int count() override;
    void move() override;
    double getTotalWeight();
    void displayCargo();
    

};


#endif