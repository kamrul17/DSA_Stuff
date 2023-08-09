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
    char level;

public:
    // default constructor
    Hero()
    {
        cout << " default constructor";
    }
    // parameterized Constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    // copy constructor
    Hero(Hero &temp)
    {
        cout << "Copy Constructor" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void print()
    {
        cout << this->level << endl;
        cout << this->health << endl;
    }
};

int main()
{
    // instanciate object means creation of object
    // Hero ramesh();
    // parameterized constructor
    Hero ramesh(100, 'A');
    ramesh.print();
    // copy costructor
    Hero jamesh(ramesh);
    jamesh.print();

    return 0;
}