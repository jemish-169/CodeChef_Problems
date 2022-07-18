/*
Alternate Additions
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = 0;
int mini = 10e8 + 10;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x, y;
        cin >> x >> y;
        x = (y - x) % 3;
        cout << (x == 2 ? "NO" : "YES") << endl;
    }
    return 0;
}