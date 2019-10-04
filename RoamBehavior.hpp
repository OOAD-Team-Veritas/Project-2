#ifndef ROAMBEHAVIOR_HPP
#define ROAMBEHAVIOR_HPP

#include <string>
using namespace std;

//Algorithm (Strategy pattern) for Roam Behavior of Animals
class RoamBehavior {
public:
	virtual void roam(string name, string type) = 0;
	virtual ~RoamBehavior(){};
};

#endif // ROAMBEHAVIOR_HPP
