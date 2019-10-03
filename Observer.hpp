#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <iostream>
#include <fstream>

class Observer{
    public:
        virtual void update(string event) = 0;
    };

#endif // OBSERVER_HPP