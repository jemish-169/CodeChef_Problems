/*
UNCHANGEDOR
*/
#include <bits/stdc++.h>
using namespace std;
int f(int a)
{
    int res = 0;
    for (int i = 1; i <= a; i++)
    {
        // cout << res;
        res = res | i;
    }
    return res;
}
int main()
{
    int cases, pos, flag = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> pos;
        for (int j = 2; j <= pos; j++)
        {
            // cout << "hy";
            if (f(j) == f(j - 1))
                flag++;
        }
        cout << flag << endl;
        flag = 0;
    }
    return 0;
}