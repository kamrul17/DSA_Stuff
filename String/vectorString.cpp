#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "abcde";

    // Original string
    cout << "Original: " << str1 << endl;

    // Reverse the entire string
    // reverse(str1.begin() + 2, str1.end());
    // cout << "After reversing the entire string: " << str1 << endl;
    reverse(str1.begin() + 4, str1.end());
    cout << "After reversing the entire string: " << str1 << endl;

    // // Reverse the first two elements
    // reverse(str1.begin(), str1.begin() + 2);
    // cout << "After reversing the first two elements: " << str1 << endl;

    // // Reverse the remaining elements starting from the third element
    // reverse(str1.begin() + 2, str1.end());
    // cout << "After reversing the remaining elements: " << str1 << endl;

    return 0;
}
