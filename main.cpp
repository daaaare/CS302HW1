#include <iostream>
#include "people.h"
#include "cargo.h"
#include "bus.h"
#include "train.h"

int main(){
    //3 people to show off the different names and heights
    People person1, person2, person3;

    person1.setName("Miguel Ballocanag");
    person1.setHeight(67);

    person2.setName("Sara Davis");
    person2.setHeight(65);

    person3.setName("John Doe");
    person3.setHeight(71);

    //3 cargo items
    Cargo cargo1, cargo2, cargo3;
    
    cargo1.setType("Coal");
    cargo1.setWeight(100);

    cargo2.setType("Crate");
    cargo2.setWeight(300);

    cargo3.setType("Metal");
    cargo3.setWeight(2000);

    //Create bus and train objects
    Bus bus;
    Train train;

    bus.setFare(2.50);
    std::cout << "Total fare for bus: $" << bus.totalFare() << std::endl;

    //Load people onto bus
    std::cout << "Loading people onto bus... " << std::endl << std::endl;
    bus.load(person1);
    bus.load(person2);
    bus.load(person3);

    //Displays passengers organized from shortest to tallest
    bus.displayPassengers();
    std::cout << std::endl;

    //Load cargo onto train
    std::cout << "Loading cargo onto train... " << std::endl;
    train.load(cargo1);
    train.load(cargo2);
    train.load(cargo3);

    //Displays cargo on train
    train.displayCargo();
    
    //Display total weight of cargo
    std::cout << "Total weight of cargo on the train is " << train.getTotalWeight() << " lbs" << std::endl << std::endl;

    //Display bus passenger count and train cargo count
    std::cout << "Bus passenger count: " << bus.count() << std::endl;
    std::cout << "Train cargo count: " << train.count() << std::endl << std::endl;

    //Simulating movement
    bus.move();
    train.move();
    std::cout << std::endl;

    //Unloading bus and train
    std::cout << "Unloading bus..." << std::endl;
    bus.unload();
    std::cout<< "Unloading train..." << std::endl;
    train.unload();

    //Displays passengers organized from shortest to tallest after last stop
    std::cout << "Passengers: " << std::endl;
    bus.displayPassengers();
    std::cout << std::endl;

    //Displays cargo on train after unload
    train.displayCargo();

    //Display bus passenger count and train cargo count again after unloading
    std::cout << "Bus passenger count after the stop: " << bus.count() << std::endl;
    std::cout << "Train cargo count after unloading: " << train.count() << std::endl;

    //Display total weight of cargo after unloading
    std::cout << "Total weight of the cargo on the train after unloading is " << train.getTotalWeight() << " lbs" << std::endl << std::endl;

    //Checks if the Bus and train are empty
    std::cout << "Bus is empty: " << (bus.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "Train is empty: " << (train.isEmpty() ? "Yes" : "No") << std::endl;

    //Clearing everyone off the bus and everything off of the train
    std::cout << "This is our last stop please everyone leave the bus. " << std::endl;
    bus.empty();
    std::cout << "All of the cargo has been unloaded. " << std::endl;
    train.empty();

    //Checks again if bus and train are empty
    std::cout << "Bus is empty: " << (bus.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "Train is empty: " << (train.isEmpty() ? "Yes" : "No") << std::endl;



    return 0;
}