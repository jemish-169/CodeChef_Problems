/*
CodeChef Streak
*/
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, s;
        cin >> n;
        int ma = 0, maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s == 0)
                ma = 0;
            else
                ma++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s == 0)
                maxi = 0;
            else
                maxi++;
        }
        if (maxi < ma)
            cout << "Addy\n";
        else if (maxi == ma)
            cout << "Draw\n";
        else
            cout << "Om\n";
    }
    return 0;
}