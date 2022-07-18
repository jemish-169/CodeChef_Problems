/*
Roller Coaster
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int x, y;
        cin >> x >> y;
        (x >= y) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}