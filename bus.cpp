#include "bus.h"
#include <iostream>
//i thought of the logic of this function i did not know we could look up a sorting algorithm i thought googling one was cheating :(
void Bus::load(People people){
    int i;                                              //had to define i outside of the for loop or the insertion part wouldn't define i
    for(i = 0; i < pvec.size(); i++){                  //loop goes from 0 to whatever the size of the vector is
        if(pvec[i].getHeight() >= people.getHeight()){ //checks the height of each person on the bus (in the vector) until we find a person whose height is greater than or equal to the height of the person we are inserting
            break;                                     //once we find this person the loop then breaks and i stops at that position (lets say the 3rd person in the loop is 64in tall and we are inserting someone 62in tall the loop stops at 3 which then makes i = 3)
        }
    }  
    pvec.insert(pvec.begin() + i, people);             //the person we are then inserting is seated at the front of the bus and then TELEPORTED i amount of times subsiquently seating them in front of the person who is taller than them 
}                                                      //in the 64in 62in example the 64in tall person would ten become the 4th person on the bus and the 62in tall person on the bus the 3rd person on the bus

void Bus::unload(){
    if(!pvec.empty()){
        pvec.pop_back();
    }
    else{
        std::cout << "No passengers to unload. " << std::endl;
    }

}

void Bus::empty(){
    pvec.clear(); //gets everyone off of the bus (emergency situation)
}

bool Bus::isEmpty(){
    return pvec.empty(); //returns true if the bus is empty
}

int Bus::count(){
   return pvec.size(); //returns the amount of people on the bus
}

void Bus::move(){
    std::cout << "The Bus has reached the next stop. " << std::endl;
}

void Bus::setFare(double f){
    fare = f;
}

double Bus::totalFare(){
    return fare;
}
void Bus::displayPassengers(){
    for (int i = 0; i < pvec.size(); i++){ //runs to the size of the pvec vector
        std::cout << pvec[i].getInfo() << std::endl; //accesses each item in the vector and outputs their height and name
    }
}
