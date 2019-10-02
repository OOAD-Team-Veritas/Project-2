#ifndef TROTT_HPP
#define TROTT_HPP

#include "RoamBehavior.hpp"

class Trott : public RoamBehavior{
public:
	void roam(std::string name, std::string type) {
		std::cout << name + " the " + type + " is trotting";
	}
};

#endif