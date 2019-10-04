#ifndef LION_HPP
#define LION_HPP

#include "Feline.hpp"
#include "LionNoise.hpp"

class Lion : public Feline{

public:
    Lion(string inputName){
        name = inputName;
        animalType = "Lion";
        this->noiseBehavior = new LionNoise();
    }

    ~Lion(){
        delete noiseBehavior;
    }


};

#endif // LION_HPP
