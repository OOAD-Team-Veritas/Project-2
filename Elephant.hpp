#ifndef ELEPHANT_HPP
#define ELEPHANT_HPP

#include "Pachyderm.hpp"
#include "ElephantNoise.hpp"

class Elephant : public Pachyderm{

public:
    Elephant(string inputName){
        name = inputName;
        animalType = "Rhino";
        this->noiseBehavior = new ElephantNoise();
    }

    ~Elephant(){
        delete noiseBehavior;
    }
};

#endif // ELEPHANT_HPP
