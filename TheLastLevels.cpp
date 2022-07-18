/*
The Last Levels
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
        int d, x, y, z;
        cin >> x >> y >> z;
        if (x % 3 == 0)
            d = (x / 3) - 1;
        else
            d = x / 3;
        cout << x * y + d * z << endl;
    }
    return 0;
}