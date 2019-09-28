#include <time.h>
#include <string>
#include <iostream>
#include <random>
#include <chrono>
#include "Feline.hpp"
#include "Cat.hpp"
using namespace std;

Cat::Cat(string inputName) : Feline(inputName){
    animalType = "Cat";
}

void Cat::makeNoise(){
    randomBehavior();
}

void Cat::randomBehavior(){

    //Generates a random number in the spec. range
    static unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();
    static std::mt19937 eng(seed1); // seed the generator
    static std::uniform_int_distribution<int> uniDist(1, 4); // define the range

    int num = uniDist(eng);

    switch(num){
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
            cout<<"Meaow! - said " + name + " the Cat" <<endl;
        default: sleep();
    }
}
