/*
Equal Pairs (Easy)
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int maxi, freq = 0;
        for (auto i : mp)
        {
            if (freq <= i.second)
            {
                freq = i.second;
                maxi = i.first;
            }
        }
        if (mp.size() != 1 && mp[0] != 0)
        {
            mp[maxi] += mp[0];
            mp[0] = 0;
        }
        int pairs = 0;
        for (auto i : mp)
        {
            pairs += (i.second * (i.second - 1)) / 2;
        }
        cout << pairs << endl;
    }
    return 0;
}