/*
Joining Date
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
        float n, k;
        cin >> n >> k;
        float x = ceil(n / 5);
        float y = ceil(k / 5);
        cout << x - y << endl;
    }
    return 0;
}