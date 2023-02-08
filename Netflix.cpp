/*
Netflix
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        map<char, int> mp;
        int x;
        bool b = true;
        string str = "";
        cin >> x >> str;
        for (auto i : str)
        {
            mp[i]++;
            if (mp[i] > 1)
            {
                cout << x - 2 << endl;
                b = false;
                break;
            }
        }
        if (b)
            cout << -1 << endl;
    }
    return 0;
}