#include <iostream>
#include <string>
#include "RoamBehavior.cpp"

using namespace std;

class Animal{

public:
    RoamBehavior roamBehavior;

    Animal(string inputName){
        name = inputName;
        state = "";
        animalType = "";
    }

    string getName(){
        return name;
    }

    string getState(){
        return state;
    }

    void wakeUp(){
        state = "awake";
        cout<<name + " the " + animalType + " is " + state;
    }
    virtual void sleep(){
        state = "sleeping";
        cout<<name + " the " + animalType + " is " + state;
    }

    //Pure virtual functions
    virtual void makeNoise() = 0;
    virtual void roam() = 0;

    void eat(){
        state = "eating";
        cout<<name + " the " + animalType + " is " + state;
    }

protected:
    string name;
    string animalType;
    //What the animal is doing right now (kind of like a state machine)
    string state;
};
