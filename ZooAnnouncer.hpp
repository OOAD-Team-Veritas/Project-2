#ifndef ZOOANNOUNCER_HPP
#define ZOOANNOUNCER_HPP

#include "Observer.hpp"

class ZooAnnouncer : public Observer{
    public:
        void update(string event) override {
            cout<<"Hi, this is the Zoo Announcer.  The Zookeeper is about to ";
            cout<<event<<endl;
        }
    };

#endif // ZOOANNOUNCER_HPP


