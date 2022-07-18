/*
The Cooler Dilemma 2
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> x >> y;
        y % x == 0 ? cout << (y / x) - 1 << endl : cout << y / x << endl;
    }

    return 0;
}