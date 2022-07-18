/*
Too many Floors
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
        int x, y;
        cin >> x >> y;
        if (x % 10 == 0)
            x = (x / 10) - 1;
        else
            x /= 10;
        if (y % 10 == 0)
            y = (y / 10) - 1;
        else
            y /= 10;
        cout << abs(x - y) << endl;
    }
    return 0;
}