/*
Fill Candies
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
        int n, k, m;
        cin >> n >> k >> m;
        cout << ceil(1.0 * n / (k * m)) << endl;
    }
    return 0;
}