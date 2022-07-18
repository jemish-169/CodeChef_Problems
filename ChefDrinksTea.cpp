/*
Chef Drinks Tea
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
        float x, y, z;
        cin >> x >> y >> z;
        cout << ceil(x / y) * z << endl;
    }
    return 0;
}