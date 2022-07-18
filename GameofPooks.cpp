/*
Game of Pooks
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int x;
        cin >> x;
        if (x == 2 || x == 3)
            cout << x - 1 << endl;
        else
            cout << x << endl;
    }

    return 0;
}