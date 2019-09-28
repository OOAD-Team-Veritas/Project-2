#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

using namespace std;

class Animal{

public:
    Animal(string inputName);

    string getName();
    string getState();
    void wakeUp();
    void sleep();

    //Pure virtual functions
    virtual void makeNoise() = 0;
    virtual void roam() = 0;

    void eat();

protected:
    string name;
    string animalType;
    //What the animal is doing right now (kind of like a state machine)
    string state;
};




#endif // ANIMAL_HPP
