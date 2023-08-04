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
        int ma = 0, maxi = 0, mam(0), mamm(0);
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s == 0)
                ma = 0;
            else
                ma++;
            mam = max(mam, ma);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s == 0)
                maxi = 0;
            else
                maxi++;
            mamm = max(mamm, maxi);
        }
        if (mamm < mam)
            cout << "Om\n";
        else if (mamm == mam)
            cout << "Draw\n";
        else
            cout << "Addy\n";
    }
    return 0;
}