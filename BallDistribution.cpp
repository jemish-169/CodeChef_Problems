/*
Ball distribution
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
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
        int m, n;
        cin >> n >> m;
        vector<int> vec(n);
        for (int i = 0; i < m; i++)
        {
            cin >> vec[i];
        }
        int res = 0;
        for (int i = 0; i < m; i++)
        {
            res += n - vec[i];
        }
        if (n > res)
            cout << n - res << "\n";
        else
            cout << "0"
                 << "\n";
    }
    return 0;
}