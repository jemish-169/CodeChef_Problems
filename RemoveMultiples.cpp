/*
Remove multiple
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
        int s, n, x, sum(0);
        cin >> s >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        cout << ((s * (s + 1)) / 2) - sum << endl;
    }
    return 0;
}