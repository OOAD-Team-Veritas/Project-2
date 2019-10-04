#ifndef DOGNOISE_HPP
#define DOGNOISE_HPP

#include "NoiseBehavior.hpp"

//Concrete Algorithm (Strategy pattern)
class DogNoise : public NoiseBehavior{
public:

    void makeNoise(string name){
        cout<<"Woof! - said " + name + " the Dog" <<endl;
    }

};

#endif // DOGNOISE_HPP
