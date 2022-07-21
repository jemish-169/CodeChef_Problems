/*
Buy Lamps
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
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        cout << (k * x) + (n - k) * min(x, y) << endl;
    }
    return 0;
}