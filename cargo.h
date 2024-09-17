//creates setters and getters for the type of cargo
//also adds weight and type of cargo
//getInfo displays cargo type and weight 

#ifndef CARGO_H
#define CARGO_H

#include <string>


class Cargo {
    private: 
    std::string type;
    double weight;

    public:
    void setType(std::string newType);
    std::string getType();
    void setWeight(double newWeight);
    double getWeight();
    std::string getInfo();

};


#endif