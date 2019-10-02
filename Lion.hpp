#ifndef LION_HPP
#define LION_HPP

#include "Feline.hpp"
#include "Prowl.hpp"

class Lion : public Feline{

public:
    Lion(string inputName){
        name = inputName;
        animalType = "Lion";
        this->roamBehavior = new Prowl();
    }

    ~Lion(){};

    void makeNoise(){
        cout<<"Grraaaauuuu! - said " + name + " the Lion" <<endl;
    }
};

#endif // LION_HPP
