#ifndef TIGER_HPP
#define TIGER_HPP

#include "Feline.hpp"
#include "TigerNoise.hpp"

class Tiger : public Feline{

public:
    Tiger(string inputName){
        name = inputName;
        animalType = "Tiger";
        this->noiseBehavior = new TigerNoise();
    }

    ~Tiger(){};


};

#endif // TIGER_HPP
