#ifndef WOLF_HPP
#define WOLF_HPP

#include "Canine.hpp"

class Wolf : public Canine{
public:
    Wolf(string inputName);
    void makeNoise();
};

#endif // WOLF_HPP
