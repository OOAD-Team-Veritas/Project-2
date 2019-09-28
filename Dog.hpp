#ifndef DOG_HPP
#define DOG_HPP

#include "Canine.hpp"

class Dog : public Canine{
public:

    Dog(string inputName) : Canine(inputName){
        animalType = "Dog";
    }

    void makeNoise(){
        cout<<"Woof! - said " + name + " the Dog" <<endl;
    }

};

#endif // DOG_HPP
