#ifndef CANINE_HPP
#define CANINE_HPP

#include "Animal.hpp"

class Canine : public Animal{
public:
    Canine(string inputName):Animal(inputName){}

    void roam(){
        state = "trotting";
        cout<<name + " the " + animalType + " is " + state <<endl;
    }
};

#endif // CANINE_HPP
