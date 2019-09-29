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
#include "Zoo.h"
#include "ZooKeeper.h"

using namespace std;

int main()
{
     //Set up our Zoo
    Zoo theOOPZoo;

    //Fill up Zoo with animals
    theOOPZoo.addAnimal(new Cat("Cory"));
    theOOPZoo.addAnimal(new Cat("Cam"));
    theOOPZoo.addAnimal(new Tiger("Terry"));
    theOOPZoo.addAnimal(new Tiger("Tim"));
    theOOPZoo.addAnimal(new Lion("Lenny"));
    theOOPZoo.addAnimal(new Lion("Lisa"));
    theOOPZoo.addAnimal(new Hippo("Harry"));
    theOOPZoo.addAnimal(new Hippo("Henrietta"));
    theOOPZoo.addAnimal(new Rhino("Ryan"));
    theOOPZoo.addAnimal(new Rhino("Rachel"));
    theOOPZoo.addAnimal(new Elephant("Eli"));
    theOOPZoo.addAnimal(new Elephant("Emmy"));
    theOOPZoo.addAnimal(new Dog("Dougie"));
    theOOPZoo.addAnimal(new Dog("Dante"));
    theOOPZoo.addAnimal(new Wolf("Wolfgang"));
    theOOPZoo.addAnimal(new Wolf("Wren"));

    ZooKeeper griffin("Griffin Keyes", theOOPZoo);

    /*
    Animal* cat = new Cat("Corey");
    Animal* hippo = new Hippo("Harry");
    Animal* wolf = new Wolf("Wren");
    Animal* tiger = new Tiger("Tigger");
    Animal* lion = new Lion("Scar");
    Animal* dog = new Dog("Doodoo");
    Animal* elephant = new Elephant("Eli");
    Animal* rhino = new Rhino("Ryan");
    delete cat;
    delete hippo;
    delete wolf;
    delete tiger;
    delete lion;
    delete dog;
    delete elephant;
    delete rhino;
    */

    //Open the zoo!
    griffin.openZoo();

    //griffin.wakeUpAnimals();

    //Manually deleting the Animals...
    theOOPZoo.deleteAllAnimals();

    return 0;
}
