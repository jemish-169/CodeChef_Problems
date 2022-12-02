/*
Chef and Socks
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
    // cin >> cases;
    while (cases--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d = (c - a) / b;
        if (d % 2 == 0)
            cout << "Lucky Chef" << endl;
        else
            cout << "Unlucky Chef" << endl;
    }
    return 0;
}