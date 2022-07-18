/*
CRICUP
*/
#include <bits/stdc++.h>
using namespace std;
int diff(int a, int b)
{
    if (a - b <= 0)
        return b - a;
    else
        return a - b;
}
int main()
{
    int cases, x, y, d;
    cin >> cases;
    while (cases--)
    {
        cin >> x >> y >> d;
        diff(x, y) <= d ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}