/*
Weight Balance
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
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if ((b - a) <= (max(c, d) * e) && (b - a) >= (min(c, d) * e))
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}