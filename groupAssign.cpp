/*
Group Assignment
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, n, x;
    cin >> cases;
    while (cases--)
    {
        cin >> n >> x;
        cout << 2 * n - x + 1 << endl;
    }
    return 0;
}