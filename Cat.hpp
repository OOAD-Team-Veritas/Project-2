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
#include <random>
#include <chrono>

class Cat : public Feline{
    
public:
    Cat(string inputName) : Feline(inputName){
        animalType = "Cat";
    }

    void makeNoise(){
        randomBehavior();
    }

private:
    void randomBehavior(){
        //Generates a random number in the spec. range
        static unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();
        static std::mt19937 eng(seed1);                          // seed the generator
        static std::uniform_int_distribution<int> uniDist(1, 4); // define the range

        int num = uniDist(eng);

        switch (num)
        {
        case 1:
            roam();
            break;
        case 2:
            sleep();
            break;
        case 3:
            eat();
            break;
        case 4:
            cout << "Meaow! - said " + name + " the Cat" << endl;
        default:
            sleep();
        }
    }
};
