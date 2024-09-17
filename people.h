//creates setters and getters for the name and height of the person
//getInfo() outputs name and height of passenger
#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>

class People {
    private: 
    std::string name;
    double height;

    public:
    void setName(std::string n);
    std::string getName();
    void setHeight(double h);
    double getHeight();
    std::string getInfo();

};

#endif