/*
Dazzling GCD Pair
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    long long int a, b;
    cin >> cases;
    while (cases--)
    {
        cin >> a >> b;
        if (b - a == 1)
            cout << -1 << endl;
        else
        {
            if (a % 2 == 0)
                cout << a << " " << a + 2 << endl;
            else
                cout << a + 1 << " " << a + 3 << endl;
        }
    }
    return 0;
}