/*
Construct Permutation
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
        int n;
        cin >> n;
        if (n % 2 == 0)
            cout << -1 << endl;
        else
        {
            int x = n, y = 2;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 1)
                {
                    cout << x << " ";
                    x -= 2;
                }
                else
                {
                    cout << y << " ";
                    y += 2;
                }
            }
            cout << endl;
        }
    }
    return 0;
}