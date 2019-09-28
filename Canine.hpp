#ifndef CANINE_HPP
#define CANINE_HPP

#include "Animal.hpp"

class Canine : public Animal{
public:
    Canine(string inputName);

    void roam();
};

#endif // CANINE_HPP
