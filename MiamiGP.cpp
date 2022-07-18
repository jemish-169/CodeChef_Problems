/*
Miami GP
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        float x, y;
        cin >> x >> y;
        if (x * 1.07 >= y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}