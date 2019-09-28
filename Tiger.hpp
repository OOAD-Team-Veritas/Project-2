#ifndef TIGER_HPP
#define TIGER_HPP

#include "Feline.hpp"

class Tiger : public Feline{

public:
    Tiger(string inputName) : Feline(inputName){
        animalType = "Tiger";
    }

    void makeNoise(){
        cout<<"RRrrrr! - said " + name + " the Tiger" <<endl;
    }
};

#endif // TIGER_HPP