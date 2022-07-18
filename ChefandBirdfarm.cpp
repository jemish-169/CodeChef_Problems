/*
Chef and Bird farm
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c % a == 0 && c % b == 0)
            cout << "ANY" << endl;
        else if (c % a == 0)
            cout << "CHICKEN" << endl;
        else if (c % b == 0)
            cout << "DUCK" << endl;
        else
            cout << "NONE" << endl;
    }
    return 0;
}