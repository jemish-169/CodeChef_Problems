/*
make all equals pair
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
list<int> ls;
vector<int> vec;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        map<int, int> mp;
        int maxi = INT_MIN;
        int n, x;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        for (auto i : mp)
            maxi = max(maxi, i.second);
        cout << n - maxi << endl;
    }
    return 0;
}