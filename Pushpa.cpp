/*
Pushpa
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int n, x;
        map<int, int> mp;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        int ans = 0;
        for (auto i : mp)
        {
            int temp = (i.first) + (i.second - 1);
            ans = max(ans, temp);
        }

        auto i = --mp.end();
        ans = max(ans, i->first);
        cout << ans << endl;
    }
    return 0;
}