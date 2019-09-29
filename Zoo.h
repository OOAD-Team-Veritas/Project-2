#ifndef ZOO_H
#define ZOO_H

#include <list>

class Zoo{
public:
    list<Animal*> zooAnimals;

    Zoo(){
        //Zoo is closed at first
        this->zooOperations = false;
    }

    ~Zoo(){
        list<Animal*>::iterator it;
        for (it = zooAnimals.begin(); it != zooAnimals.end(); ++it){
            delete *it;
        }
    }

    void addAnimal(Animal* newAnimal){
        //zooAnimals.push_back(newAnimal);
    }

    void openZoo(){
        this->zooOperations = true;
    }

    void closeZoo(){
        this->zooOperations = false;
    }

private:
    bool zooOperations;
};


#endif // ZOO_H
