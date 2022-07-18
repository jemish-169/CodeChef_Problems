/*
Easy Pronunciation
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
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
        bool b = true;
        int y = 0, x;
        string s;
        cin >> x >> s;
        for (int i = 0; i < x; i++)
        {
            if (st.find(s[i]) != st.end())
                y = 0;
            else
                ++y;
            if (y == 4)
            {
                b = false;
                break;
            }
        }
        cout << (b ? "YES" : "NO") << endl;
    }
    return 0;
}