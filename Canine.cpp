#include <iostream>
#include <string>
#include "Canine.hpp"

Canine::Canine(string inputName):Animal(inputName){}

void Canine::roam(){
    state = "trotting";
    cout<<name + " the " + animalType + " is " + state <<endl;
}
