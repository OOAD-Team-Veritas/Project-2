#ifndef LUMBER_HPP
#define LUMBER_HPP

#include "RoamBehavior.hpp"

class Lumber : public RoamBehavior{
public:
	void roam(std::string name, std::string type) {
		std::cout << name + " the " + type + " is lumbering" << endl;
	}
};

#endif // LUMBER_HPP