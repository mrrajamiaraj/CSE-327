#include <iostream>
using namespace std;

class battleship{
    public:
    battleship(){
        cout<<"battle ship created"<<endl;
    }
    virtual void fire()=0;
    virtual void stree()=0;

    virtual ~battleship(){
        cout<<"battleship destroyed"<<endl;
    }
};

class destroyer : public battleship{
    public:
    destroyer(){
        cout<<"destrper created"<<endl;
    }
    void fire() override{
        cout<<"destroyer fire"<<endl;
    }
    void stree() override{
        cout<<"destroyer stree"<<endl;
    }
};

class carrier : public battleship{
    public:
    carrier(){
        cout<<"carier created"<<endl;
    }
    void fire() override{
        cout<<"carrier fire"<<endl;
    }
    void stree() override{
        cout<<"carrier stree"<<endl;
    }
};

class sheepcreator(){
    public:
    virtual ~sheepcreator(){}
    virtual battleship *factorymethod() =0;
};


