#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "RoamBehavior.hpp"

using namespace std;

class Animal{

public:
    Animal(string inputName){
        name = inputName;
    }
    Animal(){
        name = "";
        state = "";
        animalType = "";
    }

    virtual ~Animal(){};

    string getName(){
        return name;
    }

    string getState(){
        return state;
    }

    void wakeUp(){
        state = "awake";
        cout<<name << " the " << animalType << " is " <<state <<endl;
    }

    void sleep(){
        state = "sleeping";
        cout<<name << " the " << animalType << " is " <<state <<endl;
    }

    void eat(){
        state = "eating";
        cout<<name << " the " << animalType << " is " <<state <<endl;

    }

    //Pure virtual functions
    virtual void makeNoise() = 0;

    virtual void roam() {
        roamBehavior->roam(name, animalType);
    }

protected:
    string name;
    string animalType;
    //What the animal is doing right now (kind of like a state machine)
    string state;
    RoamBehavior* roamBehavior;
};

#endif // ANIMAL_HPP
