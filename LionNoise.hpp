#ifndef LIONNOISE_HPP
#define LIONNOISE_HPP

//Concrete Algorithm (Strategy pattern)
class LionNoise : public NoiseBehavior{
public:

    void makeNoise(string name){
        cout<<"Grraaaauuuu! - said " + name + " the Lion" <<endl;
    }

};

#endif // LIONNOISE_HPP
