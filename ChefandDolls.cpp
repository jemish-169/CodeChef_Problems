/*
Chef and Dolls
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
        unordered_map<int, int> mp;
        int x, t;
        cin >> x;
        while (x--)
        {
            cin >> t;
            mp[t]++;
        }
        for (auto i : mp)
            if (i.second % 2 == 1)
            {
                cout << i.first << endl;
                break;
            }
    }
    return 0;
}