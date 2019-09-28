#include "Animal.hpp"

Animal::Animal(string inputName){
    name = inputName;
    state = "";
    animalType = "";
}

string Animal::getName(){
    return name;
}

string Animal::getState(){
    return state;
}

void Animal::wakeUp(){
    state = "awake";
    cout<<name + " the " + animalType + " is " + state <<endl;
}
void Animal::sleep(){
    state = "sleeping";
    cout<<name + " the " + animalType + " is " + state <<endl;
}

void Animal::eat(){
    state = "eating";
    cout<<name + " the " + animalType + " is " + state <<endl;
}
