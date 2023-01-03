/*
Akash and Missing Class
*/
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int x(0);
        if (n % 7 == 6)
            x = 1;
        cout << n / 7 + x << endl;
    }
}