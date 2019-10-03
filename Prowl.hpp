#ifndef PROWL_HPP
#define PROWL_HPP

class Prowl : public RoamBehavior{
public:
	void roam(std::string name, std::string type) {
		std::cout << name + " the " + type + " is prowling" << endl;
	}
};

#endif // PROWL_HPP