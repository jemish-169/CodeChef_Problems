/*
Count of Maximum
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
        map<int, int> mp;
        int t, x;
        cin >> x;
        while (x--)
        {
            cin >> t;
            mp[t]++;
        }
        int maxi = 0;
        for (auto i : mp)
            if (i.second > maxi)
            {
                maxi = i.second;
                x = i.first;
            }
        cout << x << " " << maxi << endl;
    }
    return 0;
}