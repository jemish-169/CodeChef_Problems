/*
Chef and Gym
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    int cases;
    cin >> cases;
    while (cases--)
    {
        cin >> a >> b >> c;
        if (a + b <= c)
            cout << 2 << endl;
        else if (a <= c)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}