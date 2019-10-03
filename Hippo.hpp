#ifndef HIPPO_HPP
#define HIPPO_HPP

#include "Pachyderm.hpp"
#include "HippoNoise.hpp"

class Hippo : public Pachyderm{

public:
    Hippo(string inputName){
        name = inputName;
        animalType = "Hippo";
        this->noiseBehavior = new HippoNoise();
    }

    ~Hippo(){};


};

#endif // HIPPO_HPP
