/*
Range Minimize
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
        int m, p, count, j = 0;
        cin >> m >> p;
        count = p + (20 * j) + m + j;
        for (int i = 1; (m + i < 300) && (count <= 1000); i++)
        {
            count = p + (20 * i) + m + i;
            if (count > 1000)
                i--;
            j = i;
        }
        cout << j << endl;
    }
    return 0;
}