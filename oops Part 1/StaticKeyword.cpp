#include <iostream>
using namespace std;
// create class
class Hero
{
public:
    int health;
    char level;
    // static data member;
    static int timeTocomplete;
    // static function->only access the static variable;
    static int random()
    {
        return timeTocomplete;
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
};
int Hero::timeTocomplete = 5;
int main()
{
    // cout << Hero::timeTocomplete;

    cout << Hero::random();

    return 0;
}