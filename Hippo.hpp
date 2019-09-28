#ifndef HIPPO_HPP
#define HIPPO_HPP

#include "Pachyderm.hpp"

class Hippo : public Pachyderm{

public:
    Hippo(string inputName) : Pachyderm(inputName){
        animalType = "Hippo";
    }

    void makeNoise(){
        cout<<"Snrrrt! - said " + name + " the Hippo" <<endl;
    }
};

#endif // HIPPO_HPP
