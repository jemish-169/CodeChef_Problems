/*
Turn It
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
        int u, v, a, s;
        cin >> u >> v >> a >> s;

        if ((v * v) >= ((u * u) - (2 * a * s)))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}