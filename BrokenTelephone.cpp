/*
Broken Telephone
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
        int x, ans = 0;
        cin >> x;
        vector<int> vec(x);
        for (int i = 0; i < x; i++)
            cin >> vec[i];
        if (vec[0] == vec[1])
            ans++;
        if (vec[x - 1] == vec[x - 2])
            ans++;

        for (int i = 1; i < x - 1; i++)
        {
            if ((vec[i] == vec[i - 1]) && (vec[i] == vec[i + 1]))
                ans++;
        }
        cout << x - ans << endl;
    }
    return 0;
}