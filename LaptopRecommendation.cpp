/*
Laptop Recommendation
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        map<int, int> mp;
        int data, q = 0, r = 0, maxi = 0, j, n, x = 0;
        cin >> n;
        int a[n] = {0}, flag[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> data;
            for (j = 0; j < x; j++)
                if (a[j] == data)
                {
                    flag[j]++;
                    break;
                }
            if (j == x)
            {
                a[x] = data;
                flag[x]++;
                x++;
            }
        }

        for (int i = 0; i < n; i++)
            mp.insert({flag[i], a[i]});
        for (int i = 0; i < n; i++)
            maxi = max(maxi, flag[i]);
        for (int i = 0; i < n; i++)
            if (maxi == flag[i])
                q++;
        if (q > 1)
            cout << "CONFUSED" << endl;
        else
        {
            auto i = mp.find(maxi);
            // for (auto i = mp.begin(); i != mp.end(); i++)
            //     cout << i->first << " " << i->second << endl;
            cout
                << i->second << endl;
        }
    }
    return 0;
}