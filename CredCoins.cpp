/*
Cred Coins
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, i, j;
    cin >> cases;
    while (cases--)
    {
        cin >> i >> j;
        cout << (i * j) / 100 << endl;
    }
    return 0;
}