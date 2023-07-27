// count occurence of anagrams
#include <bits/stdc++.h>
using namespace std;

bool allZero(vector<int> &counter)
{
    for (int &i : counter)
    {
        if (i != 0)
        {
            return false;
        }
    }
    return true;
}
int Search(string text, string pat)
{
    int n = text.size();
    vector<int> counter(26, 0);
    // count the frequency of each char in pat
    for (int i = 0; i < pat.length(); i++)
    {
        char ch = pat[i];
        counter[ch - 'a']++;
    }

    int i = 0, j = 0;
    int k = pat.length();
    int result = 0;
    while (j < n)
    {
        counter[text[j] - 'a']--;
        if ((j - i + 1) == k)
        {
            if (allZero(counter))
            {
                result++;
            }
            counter[text[i] - 'a']++;
            i++;
        }
        j++;
    }
    return result;
}
int main()
{
    string text = "forxforfxdofr";
    string pat = "for";

    int ans = Search(text, pat);
    cout << ans;
    return 0;
}