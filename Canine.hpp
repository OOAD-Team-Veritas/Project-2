#ifndef CANINE_HPP
#define CANINE_HPP

#include "Animal.hpp"
#include "Trott.hpp"

class Canine : public Animal{
public:

	Canine() {
		this->roamBehavior = new Trott();
	}

    virtual ~Canine(){
        delete roamBehavior;
    }

};

#endif // CANINE_HPP
