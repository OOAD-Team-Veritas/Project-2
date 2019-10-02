#ifndef ROAMBEHAVIOR_HPP
#define ROAMBEHAVIOR_HPP

#include <string>

class RoamBehavior {
public:
	virtual void roam(std::string name, std::string type) = 0;
};

#endif