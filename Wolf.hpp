#ifndef WOLF_HPP
#define WOLF_HPP

#include "Canine.hpp"
#include "Trott.hpp"
#include "WolfNoise.hpp"

class Wolf : public Canine{
public:
    Wolf(string inputName){
        name = inputName;
        this->animalType = "Wolf";
        this->noiseBehavior = new WolfNoise();
    }

    ~Wolf(){};


};

#endif // WOLF_HPP
