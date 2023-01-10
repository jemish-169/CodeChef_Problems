/*
Motivation
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int a, b, x, t;
        cin >> a >> b;
        multimap<int, int> mp;
        for (int i = 0; i < a; i++)
        {
            cin >> x >> t;
            mp.insert({x, t});
        }
        int maxi = 0;
        for (auto i : mp)
        {
            if (i.first > b)
                break;
            maxi = max(maxi, i.second);
        }
        cout << maxi << endl;
    }
    return 0;
}