#ifndef DOG_HPP
#define DOG_HPP

#include "Canine.hpp"

class Dog : public Canine{
public:

    Dog(string inputName);

    void makeNoise();
};

#endif // DOG_HPP
