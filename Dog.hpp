#ifndef DOG_HPP
#define DOG_HPP

#include "Canine.hpp"
#include "DogNoise.hpp"

class Dog : public Canine{
public:

    Dog(string inputName){
        name = inputName;
        animalType = "Dog";
        this->noiseBehavior = new DogNoise();
    }

    ~Dog(){};



};

#endif // DOG_HPP
