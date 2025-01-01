/*
Poster Perimeter
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
        int n, m, k;
        cin >> n >> m >> k;
        int mini = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int sum = abs(k - (2 * (i + j)));
                mini = min(mini, sum);
            }
        }
        cout << mini << endl;
    }
    return 0;
}