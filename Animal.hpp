#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "RoamBehavior.hpp"
#include "NoiseBehavior.hpp"

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

    void makeNoise(){
        noiseBehavior->makeNoise(name);
    }

    virtual void roam() = 0;

protected:
    string name;
    string animalType;
    //What the animal is doing right now (kind of like a state machine)
    string state;
    NoiseBehavior* noiseBehavior;
    RoamBehavior* roamBehavior;
};

#endif // ANIMAL_HPP
