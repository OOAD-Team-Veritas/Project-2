#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Lion.hpp"
#include "Tiger.hpp"
#include "Wolf.hpp"
#include "Elephant.hpp"
#include "Hippo.hpp"
#include "Rhino.hpp"

using namespace std;

int main()
{
    //We have to declare an Animal pointer
    Animal* dog = new Dog("Dude");

    //-> is the dereference operator
    dog->makeNoise();
    dog->eat();
    dog->roam();

    Animal* cat = new Cat("Corey");

    for(int i = 0; i < 20; i++){
        cat->makeNoise();
    }

    Animal* wolf = new Wolf("Wolfie");
    Animal* tiger = new Tiger("Tigger");
    Animal* hippo = new Hippo("Harry");

    return 0;
}
