#ifndef WOLF_HPP
#define WOLF_HPP

#include "Canine.hpp"

class Wolf : public Canine{
public:
    Wolf(string inputName) : Canine(inputName){}

    void makeNoise(){
        cout<<"Howwooooo! - said " + name + " the Wolf" <<endl;
    }
};

#endif // WOLF_HPP