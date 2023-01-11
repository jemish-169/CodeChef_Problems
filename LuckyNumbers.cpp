/*
Lucky Numbers
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
        string s;
        bool b = true;
        cin >> s;
        for (auto i : s)
            if (i == '7')
            {
                cout << "YES" << endl;
                b = false;
                break;
            }
        if (b)
            cout << "NO" << endl;
    }
    return 0;
}