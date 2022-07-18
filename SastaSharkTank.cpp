/*
Sasta Shark Tank
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0, x, y;
    cin >> cases;
    while (cases--)
    {
        cin >> x >> y;
        x *= 10;
        y *= 5;
        if (x < y)
            cout << "SECOND" << endl;
        else if (x > y)
            cout << "FIRST" << endl;
        else
            cout << "ANY" << endl;
    }
    return 0;
}