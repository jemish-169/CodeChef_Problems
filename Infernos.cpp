/*
Infernos
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int n, maxi = 0, x;
        cin >> n >> x;
        int d[n], a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxi = max(maxi, a[i]);
            if ((a[i] % x) == 0)
                d[i] = (a[i] / x);
            else
                d[i] = (a[i] / x) + 1;
        }
        int y = accumulate(d, d + n, 0);
        cout << min(maxi, y) << endl;
    }
    return 0;
}