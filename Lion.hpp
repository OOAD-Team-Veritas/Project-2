#ifndef LION_HPP
#define LION_HPP

#include "Feline.hpp"
#include "Prowl.hpp"
#include "LionNoise.hpp"

class Lion : public Feline{

public:
    Lion(string inputName){
        name = inputName;
        animalType = "Lion";
        this->roamBehavior = new Prowl();
        this->noiseBehavior = new LionNoise();
    }

    ~Lion(){};


};

#endif // LION_HPP
