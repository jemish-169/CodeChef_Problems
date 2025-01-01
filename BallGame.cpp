/*
Ball Game
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
        map<double, double> mp;
        int n;
        cin >> n;
        vector<double> vec(n);
        for (int i = 0; i < n; i++)
        {
            double x;
            cin >> x;
            mp[x] = 1;
            vec[i] = x;
        }
        for (int i = 0; i < n; i++)
        {
            double x;
            cin >> x;
            mp[vec[i]] = x;
        }
        vector<double> res(n);
        int j = 0;
        for (auto i : mp)
        {
            res[j] = i.first / i.second;
            cout << res[j] << endl;
            j++;
        }
        int num = 0;
        for (int i = 1; i < n; i++)
        {
            if (res[i] >= res[i - 1])
            {
                // need to fix issue here
                num++;
            }
        }
        // cout << ++num << endl;
    }
    return 0;
}