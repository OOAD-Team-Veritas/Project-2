#ifndef DOGNOISE_HPP
#define DOGNOISE_HPP

#include "NoiseBehavior.hpp"

class DogNoise : public NoiseBehavior{
public:

    void makeNoise(string name){
        cout<<"Woof! - said " + name + " the Dog" <<endl;
    }

};

#endif // DOGNOISE_HPP
