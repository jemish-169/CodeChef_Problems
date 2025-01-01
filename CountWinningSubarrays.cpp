/*
Count Winning Subarrays
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
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        for (int i = 0; i < n; i++)
        {
            int a = 0, b = 0;
            for (int j = i; j < n; j++)
            {
            }
        }
    }
    return 0;
}