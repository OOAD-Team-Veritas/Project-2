#ifndef HIPPONOISE_HPP_INCLUDED
#define HIPPONOISE_HPP_INCLUDED

class HippoNoise : public NoiseBehavior{
public:

    void makeNoise(string name){
        cout<<"Snrrrt! - said " + name + " the Hippo" <<endl;
    }

};

#endif // HIPPONOISE_HPP_INCLUDED
