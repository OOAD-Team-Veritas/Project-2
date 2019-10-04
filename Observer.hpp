#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <iostream>
#include <fstream>

//This is the observer (abstract class) for the Observer Pattern
class Observer{
    public:
        virtual void update(string event) = 0;
    };

#endif // OBSERVER_HPP
