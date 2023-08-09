#include <iostream>
using namespace std;
// create class
class Hero
{
    // public:
    //     char name[20];
    //     int health;
    //     char level;

private:
    // char name[20];
    int health;
    // char level;
public:
    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health = h;
    }
};

int main()
{
    // instanciate object means creation of object
    Hero ramesh;
    // ramesh.health = 100;
    // ramesh.level = 'A';
    // cout << sizeof(ramesh) << endl;
    // cout << ramesh.health << endl;
    // cout << ramesh.level;
    // GETTER AND SETTER USE FOR ACCESSING PRIVATE MEMBER nd function;
    cout << ramesh.getHealth() << endl;
    ramesh.setHealth(10);
    cout << ramesh.getHealth() << endl;

    return 0;
}