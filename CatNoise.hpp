#ifndef CATNOISEBAHAVIOR_HPP
#define CATNOISEBAHAVIOR_HPP

#include "NoiseBehavior.hpp"

//Concrete Algorithm (Strategy pattern)
class CatNoise : public NoiseBehavior{
public:

    void makeNoise(string name){
        cout<<"Meaow! - said " + name + " the Cat" <<endl;
    }

};

#endif // CATNOISEBAHAVIOR_HPP
