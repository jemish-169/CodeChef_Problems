/*
Ezio and Guards
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, cases = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> x >> y;
        x >= y ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}