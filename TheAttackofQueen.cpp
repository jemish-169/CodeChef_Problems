/*
The Attack of Queen
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int a = abs(1 - min(x, y));
        int p = x - a;
        int q = y - a;
        int ans = n - max(p, q);
        if (x + y > n + 1)
        {
            int c = n - x;
            y -= c;
            ans += n - y;
        }
        else if (x + y == n + 1)
        {
            ans += n - 1;
        }
        else
        {
            int b = abs(1 - y);
            x += b;
            ans += x - 1;
        }
        ans += 2 * (n - 1);
        cout << ans << endl;
    }
    return 0;
}