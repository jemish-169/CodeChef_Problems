/*
minimum coins
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0, coins = 0, x;
    cin >> cases;
    while (cases--)
    {
        cin >> x;
        if (x % 5 == 0 || x % 10 == 0)
        {
            coins = x / 10;
            x %= 10;
            coins += x / 5;
            cout << coins << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}