/*
Chef and Waterbottle
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, n, x, k;
    cin >> cases;
    while (cases--)
    {
        cin >> n >> x >> k;
        if (k < x)
            cout << 0 << endl;
        else
        {
            if (k / x >= n)
                cout << n << endl;
            else
                cout << k / x << endl;
        }
    }

    return 0;
}