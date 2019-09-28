#ifndef PACHYDERM_HPP
#define PACHYDERM_HPP

#include "Animal.hpp"

class Pachyderm : public Animal{
public:
    Pachyderm(string inputName) : Animal(inputName){}

    void roam(){
        state = "roaming";
        cout<<name + " the " + animalType + " is " + state <<endl;
    }
};

#endif // PACHYDERM_HPP