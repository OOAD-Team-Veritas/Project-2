#include <iostream>
#include "Feline.hpp"

using namespace std;

Feline::Feline(string inputName) : Animal(inputName){}

void Feline::roam(){
    state = "prowling";
    cout<<name + " the " + animalType + " is " + state <<endl;
}
