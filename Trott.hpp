#ifndef TROTT_HPP
#define TROTT_HPP

#include <iostream>
#include "RoamBehavior.hpp"

class Trott : public RoamBehavior{
public:
	void roam(std::string name, std::string type) {
		cout << name + " the " + type + " is trotting" << endl;
	}
};

#endif // TROTT_HPP