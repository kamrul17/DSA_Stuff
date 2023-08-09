#include <iostream>
using namespace std;
// create class
class Hero
{

private:
    int health;
    char level;

public:
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
    // constructor
    Hero()
    {
        cout << " default constructor called" << endl;
    }
    // destructor
    ~Hero()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    // static memory allocation->destructor called automatically when object is out scope
    Hero a;
    // dynamic memory allocation->we have to manually call destructor by using delete
    Hero *b = new Hero();
    delete b;
    return 0;
}