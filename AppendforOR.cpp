/*
Append for OR
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
        int o, z = 0, a, b;
        bool bo = true;
        cin >> a >> b;
        for (int i = 0; i < a; i++)
        {
            cin >> o;
            z |= o;
        }
        for (int i = 0; i <= b; i++)
        {
            if ((z | i) == b)
            {
                bo = false;
                cout << i << endl;
                break;
            }
        }
        if (bo)
            cout << -1 << endl;
    }
    return 0;
}