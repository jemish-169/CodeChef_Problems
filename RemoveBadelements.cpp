/*
Remove Bad elements
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
signed main()
{
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n), a;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        for (auto i : m)
        {
            a.emplace_back(i.second);
        }
        int amax = *max_element(a.begin(), a.end());
        cout << ceil(log2(amax)) << "\n";
    }
    return 0;
}