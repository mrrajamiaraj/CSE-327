#include <iostream>
using namespace std;

class Battleship
{
public:
    Battleship()
    {
        cout << "Battleship Created" << endl;
    }
    virtual void Fire() = 0;
    virtual void Steer() = 0;
};

class Destroyer : public Battleship
{
public:
    Destroyer()
    {
        cout << "Destroyer Created" << endl;
    }
    void Fire() override
    {
        cout << "Destroyer Fire" << endl;
    }
    void Steer() override
    {
        cout << "Destroyer Steer" << endl;
    }
};

class Carrier : public Battleship
{
public:
    Carrier()
    {
        cout << "Carrier Created" << endl;
    }
    void Fire() override
    {
        cout << "Carrier Fire" << endl;
    }
    void Steer() override
    {
        cout << "Carrier Steer" << endl;
    }
};

int main()
{
    Destroyer d;
    Carrier c;
    d.Fire();
    c.Fire();
    return 0;
}
