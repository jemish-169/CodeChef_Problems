/*
Chef and his Apps
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
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        s -= (x + y);
        if (z > s)
        {
            int diff = z - s;
            mini = max(x, y);
            diff -= mini;
            if (diff > 0)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}