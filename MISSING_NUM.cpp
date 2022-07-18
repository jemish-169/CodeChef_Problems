/*
missing numbers
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll cases;
    cin >> cases;
    while (cases--)
    {
        ll arr[4];
        for (int i = 0; i < 4; i++)
            cin >> arr[i];
        sort(arr, arr + 4);
        ll a1 = (arr[2] + arr[0]) / 2;
        ll b1 = arr[2] - a1;
        ll a2 = (arr[2] + arr[1]) / 2;
        ll b2 = arr[2] - a2;
        ll a3 = (arr[3] + arr[0]) / 2;
        ll b3 = arr[3] - a3;
        ll a4 = (arr[3] + arr[1]) / 2;
        ll b4 = arr[3] - a4;
        if (a1 != 0 && b1 != 0)
        {
            if ((a1 / b1 == arr[1]) && (a1 * b1 == arr[3]) && (a1 > 0) && (b1 > 00) && (a1 <= 10000) && (b1 <= 10000))
            {
                cout << a1 << " " << b1 << endl;
                continue;
            }
        }
        if (a2 != 0 && b2 != 0)
        {
            if ((a2 / b2 == arr[0]) && (a2 * b2 == arr[3]) && (a2 > 0) && (b2 > 00) && (a2 <= 10000) && (b2 <= 10000))
            {
                cout << a2 << " " << b2 << endl;
                continue;
            }
        }
        if (a3 != 0 && b3 != 0)
        {
            if ((a3 / b3 == arr[1]) && (a3 * b3 == arr[2]) && (a3 > 0) && (b3 > 00) && (a3 <= 10000) && (b3 <= 10000))
            {
                cout << a3 << " " << b3 << endl;
                continue;
            }
        }
        if (a4 != 0 && b4 != 0)
        {
            if ((a4 / b4 == arr[0]) && (a4 * b4 == arr[2]) && (a4 > 0) && (b4 > 00) && (a4 <= 10000) && (b4 <= 10000))
            {
                cout << a4 << " " << b4 << endl;
                continue;
            }
        }
        cout << "-1 -1" << endl;
    }

    return 0;
}