#ifndef ELEPHANT_HPP
#define ELEPHANT_HPP

#include "Pachyderm.hpp"
#include "ElephantNoise.hpp"
#include "Lumber.hpp"

class Elephant : public Pachyderm{

public:
    Elephant(string inputName){
        name = inputName;
        animalType = "Rhino";
        this->noiseBehavior = new ElephantNoise();
        this->roamBehavior = new Lumber();
    }

    ~Elephant(){};


};

#endif // ELEPHANT_HPP
