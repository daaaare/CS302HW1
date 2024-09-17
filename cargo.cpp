//setters and getters for type and weight of cargo
//getinfo() outputs the type and weight of the cargo and uses std::to)string to turn weight into a string
//learned about std::to_string() here https://www.geeksforgeeks.org/stdto_string-in-cpp/
#include "cargo.h"

void Cargo::setType(std::string t){
    type = t;
}

std::string Cargo::getType(){
    return type;
}

void Cargo::setWeight(double w){
    weight = w;
}

double Cargo::getWeight(){
    return weight;
}
std::string Cargo::getInfo() {
    return "Cargo Type: " + type + ", Weight: " + std::to_string(weight) + " lbs";
}