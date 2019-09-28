#ifndef FELINE_HPP
#define FELINE_HPP

#include "Animal.hpp"

class Feline : public Animal{
public:
    Feline(string inputName) : Animal(inputName){}

    void roam(){
        state = "prowling";
        cout<<name + " the " + animalType + " is " + state <<endl;
    }
};

#endif // FELINE_HPP