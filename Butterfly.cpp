/*
Butterfly
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
        int r, g, b;
        cin >> r >> g >> b;
        if (r + g >= b && r + b >= g && b + g >= r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}