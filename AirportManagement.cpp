/*
Airport Management
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
        int n, x;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        int maxi = 0;
        for (auto i : mp)
        {
            maxi = max(maxi, i.second);
        }
        cout << maxi << "\n";
    }
    return 0;
}