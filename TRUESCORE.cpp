/*
Is the score consistent
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, a, b, c, d;
    cin >> cases;
    while (cases--)
    {
        cin >> a >> b >> c >> d;
        if (b <= d && c >= a)
            cout << "POSSIBLE" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}