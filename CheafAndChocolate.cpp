/*
Chef and Chocolates
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, c, x, y;
    cin >> cases;
    while (cases--)
    {
        cin >> c >> x >> y;
        cout << (c - x) * y << endl;
    }

    return 0;
}