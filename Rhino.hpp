#ifndef RHINO_HPP
#define RHINO_HPP

#include "Pachyderm.hpp"
#include "RhinoNoise.hpp"
#include "Lumber.hpp"

class Rhino : public Pachyderm{

public:
    Rhino(string inputName){
        name = inputName;
        animalType = "Rhino";
        this->noiseBehavior = new RhinoNoise();
        this->roamBehavior = new Lumber();
    }

    ~Rhino(){};


};

#endif // RHINO_HPP
