/*
Expiring bread
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, a, b, c;
    cin >> cases;
    while (cases--)
    {
        cin >> a >> b >> c;
        if (b * c < a)
            cout << "No" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}