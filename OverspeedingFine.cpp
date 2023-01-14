/*
Overspeeding Fine
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
        int x;
        cin >> x;
        if (x <= 70)
            cout << 0 << endl;
        else if (x <= 100)
            cout << 500 << endl;
        else
            cout << 2000 << endl;
    }
    return 0;
}