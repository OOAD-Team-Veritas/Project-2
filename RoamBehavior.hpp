#ifndef ROAMBEHAVIOR_HPP
#define ROAMBEHAVIOR_HPP

#include <string>
using namespace std;

class RoamBehavior {
public:
	virtual void roam(string name, string type) = 0;
};

#endif // ROAMBEHAVIOR_HPP