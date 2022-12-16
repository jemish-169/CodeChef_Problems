/*
Vaccine Distribution
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        float x, y, z, w(0), t(0);
        cin >> x >> y;
        for (int i = 0; i < x; i++)
        {
            cin >> z;
            if (z <= 9 || z >= 80)
                w++;
            else
                t++;
        }
        cout << ceil(w / y) + ceil(t / y) << endl;
    }
    return 0;
}