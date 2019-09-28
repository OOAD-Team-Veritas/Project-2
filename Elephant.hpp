#ifndef ELEPHANT_HPP
#define ELEPHANT_HPP

#include "Pachyderm.hpp"

class Elephant : public Pachyderm{

public:
    Elephant(string inputName) : Pachyderm(inputName){
        animalType = "Rhino";
    }

    void makeNoise(){
        cout<<"Gruunt! - said " + name + " the Rhino" <<endl;
    }
};

#endif // ELEPHANT_HPP
