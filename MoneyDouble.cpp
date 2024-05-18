/*
Money Double
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
        int a, b;
        cin >> a >> b;
        for (int i = 0; i < b; i++)
        {
            if (a < 1000)
                a += 1000;
            else
                a *= 2;
        }
        cout << a << endl;
    }
    return 0;
}