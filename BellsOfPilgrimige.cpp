/*
Bells of pilgrimage
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c < b)
            cout << d + c * 10 << endl;
        else if (c == a)
            cout << d + (b)*10 + (c - b) * 5 + 20 << endl;
        else
            cout << d + (b)*10 + (c - b) * 5 << endl;
    }
    return 0;
}