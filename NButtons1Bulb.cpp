/*
N Buttons 1 Bulb
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x, b = true;
        string s, str;
        cin >> x >> s >> str;
        for (int i = 0; i < x; i++)
        {
            if (s[i] != str[i])
            {
                b ? b = false : b = true;
            }
        }
        cout << b << endl;
    }
    return 0;
}