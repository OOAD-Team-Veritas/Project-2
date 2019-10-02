#ifndef WOLFNOISE_HPP_INCLUDED
#define WOLFNOISE_HPP_INCLUDED

#include "NoiseBehavior.hpp"

class WolfNoise : public NoiseBehavior{
public:

    void makeNoise(string name){
        cout<<"Howwooooo! - said " + name + " the Wolf" <<endl;
    }

};

#endif // WOLFNOISE_HPP_INCLUDED
