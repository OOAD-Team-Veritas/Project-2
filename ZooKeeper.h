#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

class ZooKeeper{
public:
    ZooKeeper(string name, Zoo work){
        this->name = name;
        this->workplace = work;
    }

    void openZoo(){
        workplace.openZoo();
    }

    void closeZoo(){
        workplace.closeZoo();
    }

    void wakeUpAnimals(){
        for(unsigned int i=0; i<workplace.zooAnimals.size(); i++){
            //We have animal pointer remember...
            workplace.zooAnimals[i]->wakeUp();
        }
    }

private:
    string name;
    Zoo workplace;
};


#endif // ZOOKEEPER_H
