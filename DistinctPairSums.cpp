/*
Distinct Pair Sums
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
        int a, b, n;
        cin >> a >> b;
        n = abs(a - b);
        cout << ((2 * n) + 1) << endl;
    }
    return 0;
}