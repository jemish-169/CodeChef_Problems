/*
ALTSTR
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, n, z = 0, flag1 = 0, flag2 = 0;
    string str;
    cin >> cases;
    while (cases--)
    {
        cin >> n >> str;
        for (int i = 0; i < n; i++)
            str.at(i) == '1' ? flag1++ : flag2++;
        if (flag1 == flag2)
            cout << n << endl;
        else
        {
            int mini = min(flag1, flag2);
            int maxi = max(flag1, flag2);
            // cout << mini << maxi << endl;
            for (int i = 0; maxi >= 0 && mini >= 0; i++)
            {
                if (i % 2 == 0)
                    maxi--;
                else
                    mini--;
                z++;
            }
            z--;
            cout << z << endl;
        }
        flag2 = flag1 = z = 0;
    }
    return 0;
}