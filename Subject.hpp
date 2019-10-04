#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"

//This is the subject for the Observer Pattern
class Subject{
    public:
        virtual void registerObserver(Observer *o) = 0;
        virtual void removeObserver(Observer *o) = 0;
        virtual void notifyObservers() = 0;
    };

#endif // SUBJECT_HPP
