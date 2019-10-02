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
#include "ZooAnnouncer.hpp"
#include "Observer.hpp"
#include "Subject.hpp"
#include <fstream>

using namespace std;

int main()
{

    /*
    Redirect cout to file
    Source: https://stackoverflow.com/questions/10150468/how-to-redirect-cin-and-cout-to-files
    */
    ofstream out("out.txt");
    cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!

    //Set up our Zoo
    Zoo* theOOPZoo = new Zoo();

    //Fill up Zoo with animals
    theOOPZoo->addAnimal(new Cat("Cory"));
    theOOPZoo->addAnimal(new Cat("Cam"));
    theOOPZoo->addAnimal(new Tiger("Terry"));
    theOOPZoo->addAnimal(new Tiger("Tim"));
    theOOPZoo->addAnimal(new Lion("Lenny"));
    theOOPZoo->addAnimal(new Lion("Lisa"));
    theOOPZoo->addAnimal(new Hippo("Harry"));
    theOOPZoo->addAnimal(new Hippo("Henrietta"));
    theOOPZoo->addAnimal(new Rhino("Ryan"));
    theOOPZoo->addAnimal(new Rhino("Rachel"));
    theOOPZoo->addAnimal(new Elephant("Eli"));
    theOOPZoo->addAnimal(new Elephant("Emmy"));
    theOOPZoo->addAnimal(new Dog("Dougie"));
    theOOPZoo->addAnimal(new Dog("Dante"));
    theOOPZoo->addAnimal(new Wolf("Wolfgang"));
    theOOPZoo->addAnimal(new Wolf("Wren"));

    ZooKeeper griffin("Griffin Keyes", theOOPZoo);

    ZooAnnouncer zooAnnouncer;
    griffin.registerObserver(&zooAnnouncer);

    //Open the zoo!
    griffin.openZoo();

    griffin.wakeUpAnimals();
    griffin.rollCall();
    griffin.feedAnimals();
    griffin.exerciseAnimals();
    griffin.closeZoo();

    griffin.removeObserver(&zooAnnouncer);

    delete theOOPZoo;

    return 0;
}
