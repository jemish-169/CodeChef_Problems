/*
Presents for Cheffina
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int n, flag(0), j(0);
        cin >> n;
        flag = n / 5;
        j = n % 5;
        cout << flag * 4 + j << endl;
    }
    return 0;
}