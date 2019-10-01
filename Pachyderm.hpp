#ifndef PACHYDERM_HPP
#define PACHYDERM_HPP

#include "Animal.hpp"

class Pachyderm : public Animal{
public:

    virtual ~Pachyderm(){};

    void roam(){
        state = "roaming";
        cout<<name + " the " + animalType + " is " + state <<endl;
    }
};

#endif // PACHYDERM_HPP
