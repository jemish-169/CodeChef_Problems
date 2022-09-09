/*
Good Pairs
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
        int x, data;
        map<int, int> mp;
        cin >> x;
        while (x--)
        {
            cin >> data;
            mp[data]++;
        }
        int sum = 0;
        for (auto i : mp)
        {
            int v = i.second;
            sum += (v * (v - 1)) / 2;
        }
        cout << sum << endl;
    }
    return 0;
}