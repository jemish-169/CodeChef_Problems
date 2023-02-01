/*
Zero String
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
        int x, o(0), z(0);
        cin >> x;
        string s;
        cin >> s;
        for (auto i : s)
        {
            if (i == '1')
                o++;
            else
                z++;
        }
        if (o == x)
            cout << 1 << "\n";
        else if (z == x)
            cout << 0 << "\n";
        else
        {
            if (o > z)
                cout << z + 1 << "\n";
            else
                cout << o << "\n";
        }
    }
    return 0;
}