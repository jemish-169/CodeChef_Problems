/*
7 rings
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
        int a, b;
        cin >> a >> b;
        a *= b;
        string s = to_string(a);
        if (s.length() == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}