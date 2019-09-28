#include "Wolf.hpp"

Wolf::Wolf(string inputName) : Canine(inputName){}

void Wolf::makeNoise(){
    cout<<"Howwooooo! - said " + name + " the Wolf" <<endl;
}
