/*
make it divisable
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int i = 1;
        int x;
        cin >> x;
        cout << 3;
        for (int i = 1; i < x - 1; i++)
            cout << 0;
        if (i < x)
            cout << 3;
        cout << endl;
    }
    return 0;
}