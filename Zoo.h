#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include "Animal.hpp"
using namespace std;

class Zoo{
public:
    vector<Animal*> zooAnimals;

    Zoo(){
        //Zoo is closed at first
        this->zooOperations = false;
    }

    ~Zoo(){
         for (auto p : zooAnimals){
            if(p != nullptr)
                delete p;
        }
    }

    void printAllAnimals(){
        for(unsigned int i = 0; i < zooAnimals.size(); i++){
            Animal* temp = zooAnimals[i];
            cout<<temp->getName() <<endl;
        }
    }


    void deleteAllAnimals(){
        for (auto p : zooAnimals){
            if(p != nullptr)
                delete p;
        }
    }

    void addAnimal(Animal* newAnimal){
        zooAnimals.push_back(newAnimal);
    }

    void openZoo(){
        this->zooOperations = true;
    }

    void closeZoo(){
        this->zooOperations = false;
        cout<<"Zoo is now closed!\n";
    }

private:
    bool zooOperations;
};


#endif // ZOO_H
