/*
Hungry Chef
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
        int x, i, y, n, r;
        bool b = true;
        cin >> x >> y >> n >> r;
        // for (i = 0; i <= n; i++)
        // {
        //     if ((x * i) + y * (n - i) <= r)
        //     {
        //         cout << i << " " << n - i << endl;
        //         break;
        //     }
        // }
        // if (i == n + 1)
        //     cout << -1 << endl;

        int nml = min(n, r / x), rem = r - nml * x, prem = 0;
        if (rem + x > y)
        {
            prem++;
            nml--;
        }
        else
        {
            cout << -1 << endl;
            continue;
        }
        cout << nml << " " << prem << endl;
    }
    return 0;
}