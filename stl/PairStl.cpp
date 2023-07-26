#include <iostream>
using namespace std;
int main()
{
    pair<int, string> p;
    // pair<int, string> p = {1, "qbc"};
    // p.first = 1;
    // p.second = "gfg";
    cin >> p.first;
    cin >> p.second;
    pair<int, string> &p1 = p;

    cout << p1.first << "  " << p1.second;
    cout << endl;
    cout << p.first << "  " << p.second;

    return 0;
}