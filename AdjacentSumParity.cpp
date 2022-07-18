/*
Adjacent Sum Parity
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
        int x, a, f(0);
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> a;
            if (a == 1)
                f++;
        }
        cout << (f % 2 == 1 ? "NO" : "YES") << endl;
    }
    return 0;
}