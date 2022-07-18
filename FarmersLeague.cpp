/*
Farmers League
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> x;
        cout << ((x - 1) * 3) - (((x - 1) / 2) * 3) << endl;
    }

    return 0;
}