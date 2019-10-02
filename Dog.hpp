#ifndef DOG_HPP
#define DOG_HPP

#include "Canine.hpp"
#include "Trott.hpp"

class Dog : public Canine{
public:

    Dog(string inputName){
        name = inputName;
        animalType = "Dog";
        this->roamBehavior = new Trott();
    }

    ~Dog(){};

    void makeNoise(){
        cout<<"Woof! - said " + name + " the Dog" <<endl;
    }

};

#endif // DOG_HPP
