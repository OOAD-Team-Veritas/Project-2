#ifndef PHINO_HPP
#define PHINO_HPP

class RhinoNoise : public NoiseBehavior{
public:

    void makeNoise(string name){
        cout<<"Gruunt! - said " + name + " the Rhino" <<endl;
    }

};

#endif // PHINO_HPP
