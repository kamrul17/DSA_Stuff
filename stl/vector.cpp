#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    cout << "Size : " << v.size();
    cout << "\nCapacity : " << v.capacity();
    cout << "\nMax_Size : g" << v.max_size();
    cout << endl;
    // print
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (auto val = v.begin(); val != v.end(); val++)
    {
        cout << v.begin() << endl;
        cout << *val;
    }

    cout << endl;
    // for (int val : v)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;
    // for (auto val : v)
    // {
    //     cout << val << " ";
    // }

    return 0;
}