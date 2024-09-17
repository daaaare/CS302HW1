//setters and getters for name and height of person
//getinfo() outputs name and height height is in inches
// https://www.geeksforgeeks.org/stdto_string-in-cpp/ uses std::to_string() to convert height to string learned from this website
#include "people.h"

void People::setName(std::string n){
    name = n;
}

std::string People::getName(){
    return name;
}

void People::setHeight(double h){
    height = h;
}

double People::getHeight(){
    return height;
}
std::string People::getInfo(){
    return "Name: " + name + ", Height: " + std::to_string(height) + " in";
}