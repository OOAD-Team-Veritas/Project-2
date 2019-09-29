#ifndef RHINO_HPP
#define RHINO_HPP

#include "Pachyderm.hpp"

class Rhino : public Pachyderm{

public:
    Rhino(string inputName){
        name = inputName;
        animalType = "Rhino";
    }

    ~Rhino(){};

    void makeNoise(){
        cout<<"Gruunt! - said " + name + " the Rhino" <<endl;
    }
};

#endif // RHINO_HPP
