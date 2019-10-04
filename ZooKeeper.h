#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

#include "Subject.hpp"
#include "Observer.hpp"
#include <vector>

/*
 * ZooKeeper responsibilities:
 * 1 - Open Zoo
 * 2 - Wake up animals
 * 3 - Roll call animals
 * 4 - Feed animals
 * 5 - Excercise animals
 * 6 - Shutdown Zoo
 */

 //ZooKeeper is the subject for observer pattern
class ZooKeeper : public Subject{
public:
    ZooKeeper(string name, Zoo* work){
        this->name = name;
        this->workplace = work;
    }

    virtual void registerObserver(Observer *o) override {
        observers.push_back(o);
    }

    virtual void removeObserver(Observer *o) override {
        for(unsigned int i = 0; i < observers.size(); i++){
            Observer* temp = observers[i];
            if(temp == o){
                observers.erase(observers.begin() + i);
            }
        }
    }

    //Calls update in all Observers
    virtual void notifyObservers() override {
        for(unsigned int i = 0; i < observers.size(); i++){
            Observer* temp = observers[i];
            temp->update(event);
        }
    }

    void openZoo(){
        event = "open the zoo.";
        notifyObservers();

        cout<<"Zookeeper " + name + " is opening the Zoo!\n";
        //Open the Zoo
        workplace->openZoo();
    }

    void closeZoo(){
        event = "close the zoo.";
        notifyObservers();

        cout<<"Zookeeper " + name + " is closing the Zoo.\n";
        for(unsigned int i=0; i<workplace->zooAnimals.size(); i++){
            //We have an animal pointer remember...
            workplace->zooAnimals[i]->sleep();
        }
        //Close Zoo!
        workplace->closeZoo();
    }

    void wakeUpAnimals(){
        event = "wake up the animals.";
        notifyObservers();

        for(unsigned int i=0; i<workplace->zooAnimals.size(); i++){
            //We have an animal pointer remember...
            workplace->zooAnimals[i]->wakeUp();
        }
    }

    void rollCall(){
        event = "do the roll call.";
        notifyObservers();

        cout<<"Zookeeper " + name + " is now doing roll call!\n";
        for(unsigned int i=0; i<workplace->zooAnimals.size(); i++){
            //We have an animal pointer remember...
            workplace->zooAnimals[i]->makeNoise();
        }
    }

    void feedAnimals(){
        event = "feed the animals.";
        notifyObservers();

        cout<<"Zookeeper " + name + " is feeding Animals!\n";
        for(unsigned int i=0; i<workplace->zooAnimals.size(); i++){
            //We have an animal pointer remember...
            workplace->zooAnimals[i]->eat();
        }
    }

    void exerciseAnimals(){
        event = "exercise the animals.";
        notifyObservers();

        cout<<"Zookeeper " + name + " is exercising Animals!\n";
        for(unsigned int i=0; i<workplace->zooAnimals.size(); i++){
            //We have an animal pointer remember...
            workplace->zooAnimals[i]->roam();
        }
    }

private:
    string name;
    Zoo* workplace;                 //The Zoo that ZooKeeper works at
    vector<Observer*> observers;    //Observer Pattern
    string event;
};

#endif // ZOOKEEPER_H
