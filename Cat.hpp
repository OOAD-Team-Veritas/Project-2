/*
    "In at least one case (probably for the Cats) use a random number generation
    to select from alternative responses to animal actions."
    Requirements mention the need for a randomNumber generator that determines
    what a cat will be doing. Possible actions are (for now):
    1 - roam()
    2 - sleep()
    3 - eat()
    4 - exercise()
*/

#include "Feline.hpp"

class Cat : public Feline{
public:

    Cat(string inputName);
    void makeNoise();

private:

    void randomBehavior();
};
