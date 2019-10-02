#ifndef NOISEBEHAVIOR_HPP
#define NOISEBEHAVIOR_HPP

#include<string>
using namespace std;

class NoiseBehavior{

public:
    virtual void makeNoise(string name) = 0;

};

#endif // NOISEBEHAVIOR_HPP