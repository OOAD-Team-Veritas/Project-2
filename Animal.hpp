#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "RoamBehavior.hpp"
#include "NoiseBehavior.hpp"

using namespace std;

//Host for strategy pattern (Noise Behavior & Roam Behavior)
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

    virtual void makeNoise(){
        noiseBehavior->makeNoise(name);
    }

    virtual void roam() {
        roamBehavior->roam(name, animalType);
    }

protected:
    string name;
    string animalType;
    //What the animal is doing right now (kind of like a state machine)
    string state;
    RoamBehavior* roamBehavior; //Strategy pattern
    NoiseBehavior* noiseBehavior;   //Strategy pattern
};

#endif // ANIMAL_HPP
