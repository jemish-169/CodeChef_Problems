/*
The Cooler Dilemma 1
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x, y, month, cases = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> x >> y >> month;
        x *month < y ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}