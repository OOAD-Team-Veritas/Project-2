#ifndef FELINE_HPP
#define FELINE_HPP

#include "Animal.hpp"
#include "Prowl.hpp"

class Feline : public Animal{
public:

	Feline(){
		this->roamBehavior = new Prowl();
	}

    virtual ~Feline(){
        delete roamBehavior;
    }

};

#endif // FELINE_HPP
