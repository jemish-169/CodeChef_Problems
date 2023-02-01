/*
Make Array Odd
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
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
        int n, o(0), x;
        cin >> n >> x;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] % 2 == 0)
                o++;
        }
        if (x % 2 == 1 && o % 2 == 1)
            cout << o / 2 + 1 << endl;
        else if (x % 2 == 1)
            cout << o / 2 << endl;
        else if (x % 2 == 0 && o != n)
            cout << o << endl;
        else if (x % 2 == 0)
            cout << -1 << endl;
    }
    return 0;
}