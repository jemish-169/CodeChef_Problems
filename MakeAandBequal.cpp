/*
Make A and B equal
*/
#include <bits/stdc++.h>
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x, suma(0), sumb(0);
        cin >> x;
        vector<int> a(x), b(x);

        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
            suma += a[i];
        }
        for (int i = 0; i < x; i++)
        {
            cin >> b[i];
            sumb += b[i];
        }
        if (suma != sumb)
        {
            cout << -1 << endl;
            continue;
        }
        int z = 0;
        long int n = 0;
        for (int i = 0; i < x; ++i)
            n += max(z, a[i] - b[i]);

        cout << n << endl;
    }
    return 0;
}