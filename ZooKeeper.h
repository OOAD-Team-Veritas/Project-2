#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

class ZooKeeper{
public:
    ZooKeeper(string name, Zoo* work){
        this->name = name;
        this->workplace = work;
    }

    void openZoo(){
        cout<<"Zookeeper " + name + " is opening the Zoo!\n";
        workplace->openZoo();
    }

    void closeZoo(){
        cout<<"Zookeeper " + name + " is closing the Zoo.\n";
        for(unsigned int i=0; i<workplace->zooAnimals.size(); i++){
            //We have an animal pointer remember...
            workplace->zooAnimals[i]->sleep();
        }
        workplace->closeZoo();
    }

    void wakeUpAnimals(){
        for(unsigned int i=0; i<workplace->zooAnimals.size(); i++){
            //We have an animal pointer remember...
            workplace->zooAnimals[i]->wakeUp();
        }
    }

    void rollCall(){
        cout<<"Zookeeper " + name + " is now doing roll call!\n";
        for(unsigned int i=0; i<workplace->zooAnimals.size(); i++){
            //We have an animal pointer remember...
            workplace->zooAnimals[i]->makeNoise();
        }
    }

    void feedAnimals(){
        cout<<"Zookeeper " + name + " is feeding Animals!\n";
        for(unsigned int i=0; i<workplace->zooAnimals.size(); i++){
            //We have an animal pointer remember...
            workplace->zooAnimals[i]->eat();
        }
    }

    void exerciseAnimals(){
        cout<<"Zookeeper " + name + " is exercising Animals!\n";
        for(unsigned int i=0; i<workplace->zooAnimals.size(); i++){
            //We have an animal pointer remember...
            workplace->zooAnimals[i]->roam();
        }
    }

private:
    string name;
    Zoo* workplace;
};


#endif // ZOOKEEPER_H
