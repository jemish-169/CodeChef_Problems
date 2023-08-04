/*
Transfusion Chain
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
        int a(0), b(0), ab(0), o(0);
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s == "A")
                a++;
            else if (s == "AB")
                ab++;
            else if (s == "B")
                b++;
            else if (s == "O")
                o++;
        }
        // cout << a << b << o << ab << endl;
        cout << max(a, b) + o + ab << endl;
    }
    return 0;
}