#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

//hi
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

    return 0;
}
