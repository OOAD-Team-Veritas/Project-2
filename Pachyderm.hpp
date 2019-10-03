#ifndef PACHYDERM_HPP
#define PACHYDERM_HPP

#include "Animal.hpp"
#include "Lumber.hpp"

class Pachyderm : public Animal{
public:

	Pachyderm(){
		this->roamBehavior = new Lumber();
	}

    virtual ~Pachyderm(){};
    
};

#endif // PACHYDERM_HPP
