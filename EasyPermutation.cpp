/*
Easy Permutation
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
        int x;
        cin >> x;
        x++;
        while (--x)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}