#ifndef ELEPHANTNOISE_HPP
#define ELEPHANTNOISE_HPP

//Concrete Algorithm (Strategy pattern)
class ElephantNoise : public NoiseBehavior{
public:

    void makeNoise(string name){
        cout<<"Truuumpet! - said " + name + " the Elephant" <<endl;
    }

};

#endif // ELEPHANTNOISE_HPP
