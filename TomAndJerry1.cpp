/*
Tom And Jerry 1
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
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int num = abs(a - c) + abs(b - d);
        if (num - k <= 0 && (num - k) % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}