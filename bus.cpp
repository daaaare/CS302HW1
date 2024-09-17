#include "bus.h"
#include <iostream>
//i thought of the logic of this function i did not know we could look up a sorting algorithm i thought googling one was cheating :(
void Bus::load(People people){
    int i; //had to define i outside of the for loop or the insertion part wouldn't define i
    for(i = 0; i < pvec.size(); i++){
        if(pvec[i].getHeight() >= people.getHeight()){  //checks the height of the person we are inserting if that height is greater than the first item in the vector than the loop continues 
            break;                                      
        }
    }   //if the new person is taller or the same height as the same person the loop breaks and they are then seated at the front of bus and is TELEPORTED i amount of times in front of the person that he is a little bit shorter than
    pvec.insert(pvec.begin() + i, people);
}

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