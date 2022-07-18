/*
The Mango Truck
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << (z - y) / x << endl;
    }
    return 0;
}