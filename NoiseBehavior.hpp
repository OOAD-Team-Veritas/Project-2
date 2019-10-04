#ifndef NOISEBEHAVIOR_HPP
#define NOISEBEHAVIOR_HPP

#include <string>

//Algorithm (Strategy pattern) for Noise Behavior of Animals
using namespace std;

class NoiseBehavior{

public:
    virtual void makeNoise(string name) = 0;
    virtual ~NoiseBehavior(){};

};

#endif // NOISEBEHAVIOR_HPP
