#ifndef WOLF_HPP
#define WOLF_HPP

#include "Canine.hpp"
#include "Trott.hpp"

class Wolf : public Canine{
public:
    Wolf(string inputName){
        name = inputName;
        this->animalType = "Wolf";
        this->roamBehavior = new Trott();
    }

    ~Wolf(){};

    void makeNoise(){
        cout<<"Howwooooo! - said " + name + " the Wolf" <<endl;
    }
};

#endif // WOLF_HPP
