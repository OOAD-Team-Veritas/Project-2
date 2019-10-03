#ifndef TIGERNOISEBEHAVIOR_HPP
#define TIGERNOISEBEHAVIOR_HPP

#include "NoiseBehavior.hpp"

class TigerNoise : public NoiseBehavior{
public:

    void makeNoise(string name){
        cout<<"RRrrrr! - said " + name + " the Tiger" <<endl;
    }

};


#endif // TIGERNOISEBEHAVIOR_HPP
