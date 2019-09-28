#ifndef LION_HPP
#define LION_HPP

#include "Feline.hpp"

class Lion : public Feline{

public:
    Lion(string inputName) : Feline(inputName){
        animalType = "Lion";
    }

    void makeNoise(){
        cout<<"Grraaaauuuu! - said " + name + " the Lion" <<endl;
    }
};

#endif // LION_HPP