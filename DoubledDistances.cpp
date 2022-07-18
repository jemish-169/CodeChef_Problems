/*
Doubled Distances
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> power;
void powerOfTwo()
{
    for (int i = 1; i < 1e10 + 10; i *= 2)
        power.insert(i);
}
int32_t main()
{
    int n, cases;
    cin >> cases;
    powerOfTwo();
    while (cases--)
    {
        cin >> n;
        int w, a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (w = 1; w < n - 1; w++)
        {
            int d1 = a[w] - a[w - 1];
            int d2 = a[w + 1] - a[w];
            if (d1 != 2 * d2 && 2 * d1 != d2)
            {
                cout << "No" << endl;
                break;
            }
        }
        if (w == n - 1)
            cout << "Yes" << endl;
    }
    return 0;
}