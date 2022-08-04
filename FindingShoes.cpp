/*
Finding Shoes
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
        int m, n;
        cin >> n >> m;
        if (n > m)
            cout << (n - m) + n << endl;
        else if (n <= m)
            cout << n << endl;
        else
            cout << n * 2 << endl;
    }
    return 0;
}