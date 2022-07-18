/*
Football Cup
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y && y != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        }
    return 0;
}