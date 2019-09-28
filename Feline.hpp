#ifndef FELINE_HPP
#define FELINE_HPP

#include "Animal.hpp"

class Feline : public Animal{
public:
    Feline(string inputName);

    void roam();
};

#endif // FELINE_HPP