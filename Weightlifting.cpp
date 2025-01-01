/*
Weightlifting
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 3;
    int sum = 0;
    while (cases--)
    {
        int x, y;
        cin >> x >> y;
        sum += max(x, y);
    }
    cout << sum;
    return 0;
}