/*
SIGN MOVE
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int cases, pos;
    cin >> cases;
    while (cases--)
    {
        cin >> pos;
        if (pos % 2 == 0)
            cout << pos / 2 << endl;
        else
            cout << -(pos + 1) / 2 << endl;
    }
    return 0;
}