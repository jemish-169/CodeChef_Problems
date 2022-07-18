/*
Prime Xor
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
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
        set<int> st;
        int x, y, z, a, b, c;
        cin >> x >> y;
        z = x ^ y;
        if (x % 2 && y % 2)
        {
            b = 2;
            c = y ^ b;
            a = x ^ b;
        }
        if (y % 2 && z % 2)
        {
            b = 2;
            c = y ^ b;
            a = x ^ b;
        }
        if (z % 2 && x % 2)
        {
            b = 2;
            c = y ^ b;
            a = x ^ b;
        }
        st.insert(a);
        st.insert(b);
        st.insert(c);
        for (auto i : st)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}