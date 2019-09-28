#include "Dog.hpp"

Dog::Dog(string inputName) : Canine(inputName){
    animalType = "Dog";
}

void Dog::makeNoise(){
    cout<<"Woof! - said " + name + " the Dog" <<endl;
}
