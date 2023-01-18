/*
Chef And Babla
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
map<int, int> mp;
list<int> ls;
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
        set<int> st;
        int t, x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> t;
            st.insert(t);
        }
        int pos(-1), neg(1);
        for (auto i : st)
        {
            if (i <= 0)
                neg = i;
            if (i >= 0 && pos == -1)
                pos = i;
        }
        if (pos == 0 && neg == 0)
            cout << -1 << endl;
        else if (neg == 1)
            cout << pos - 1 << endl;
        else if (pos == -1)
            cout << abs(neg) - 1 << endl;
        else
            cout << min(abs(neg), abs(pos)) - 1 << endl;
    }
    return 0;
}