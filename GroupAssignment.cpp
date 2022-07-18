/*
Group Assignment
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
        bool b = true;
        int x, a;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> a;
            mp[a]++;
        }
        for (auto i : mp)
            if (i.second % i.first != 0)
                b = false;
        cout << (b ? "YES" : "NO") << endl;
    }
    return 0;
}