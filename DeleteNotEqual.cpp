/*
Delete Not Equal
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
        string s;
        int n = 0;
        cin >> n;
        cin >> s;

        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
                count++;
        }
        if (count == n - 1)
            cout << n << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}