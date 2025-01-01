/*
Ratio By 2
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
        int x, y;
        cin >> x >> y;
        if (x >= 2 * y || y >= 2 * x)
        {
            cout << 0 << endl;
        }
        else
        {
            int mini = min(x, y);
            int maxi = max(x, y);
            cout << abs(maxi / 2 - mini) << endl;
        }
    }
    return 0;
}