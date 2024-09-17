#include "train.h"
#include <iostream>

void Train::load(Cargo item){
    cargo.push_back(item); //adds cargo to the vector
    totalWeight += item.getWeight(); //increases total weight of the train by weight of new item
}

void Train::unload(){
    if(!cargo.empty()){
        totalWeight -= cargo.back().getWeight(); //subtracts the weight of the last item of the vector from the total weight of the cargo and sets the total weight equal to that number
        cargo.pop_back(); //deletes the last item from the vector
    }
}

void Train::empty(){
    cargo.clear(); //empties all cargo from the train
    totalWeight = 0;
}

bool Train::isEmpty(){
    return cargo.empty(); //returns true if there is no cargo on the train
}
int Train::count(){
    return cargo.size(); //counts how much cargo is in the train
}

void Train::move(){
    std::cout << "The train has moved to the next location." << std::endl;
}

double Train::getTotalWeight(){
    return totalWeight;
}

void Train::displayCargo(){ //iterates through cargo vector and displays each items type and weight
    for(int i = 0; i < cargo.size(); i++){
        std::cout << cargo[i].getInfo() << std::endl;
    }
}
