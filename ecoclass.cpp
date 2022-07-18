/*
economics class
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, n, flag = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> n;
        int s[n], d[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];
        for (int i = 0; i < n; i++)
            cin >> d[i];
        for (int i = 0; i < n; i++)
        {
            if (s[i] == d[i])
                flag++;
        }
        cout << flag << endl;
        flag = 0;
    }
    return 0;
}