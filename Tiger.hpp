#ifndef TIGER_HPP
#define TIGER_HPP

#include "Feline.hpp"
#include "Prowl.hpp"

class Tiger : public Feline{

public:
    Tiger(string inputName){
        name = inputName;
        animalType = "Tiger";
        this->roamBehavior = new Prowl();
    }

    ~Tiger(){};

    void makeNoise(){
        cout<<"RRrrrr! - said " + name + " the Tiger" <<endl;
    }
};

#endif // TIGER_HPP
