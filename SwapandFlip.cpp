/*
Swap and Flip
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        int diff = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
                diff++;
        }

        if (diff % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}