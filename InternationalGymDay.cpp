/*
International Gym Day
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

        int d, x, y;
        cin >> d >> x >> y;
        if (y == x)
        {
            cout << 0 << endl;
        }
        else if (ceil(100.0 / d) > y)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i <= y; i++)
            {
                int a = (x * i * d) / 100;
                int b = y - i;

                if (x <= (a + b))
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}