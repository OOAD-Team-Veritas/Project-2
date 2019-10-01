#ifndef ELEPHANT_HPP
#define ELEPHANT_HPP

#include "Pachyderm.hpp"

class Elephant : public Pachyderm{

public:
    Elephant(string inputName){
        name = inputName;
        animalType = "Rhino";
    }

    ~Elephant(){};

    void makeNoise(){
        cout<<"Gruunt! - said " + name + " the Rhino" <<endl;
    }
};

#endif // ELEPHANT_HPP
