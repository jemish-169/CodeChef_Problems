/*
Convert string
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
        string s;
        cin >> n >> s;

        int num = 0, a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                a++;
            else
                b++;
        }
        for (int i = 1; i <= n; i++)
        {
            if ((a == 0 && b != 0) || (b == 0 && a != 0))
            {
                if (i % 2 == 0 || i == n)
                    num++;
            }
            else if ((i - a) >= 0 && ((i - a) % 2) == 0)
            {
                num++;
            }
            else if ((i - b) >= 0 && ((i - b) % 2) == 0)
            {
                num++;
            }
        }
        cout << num << endl;
    }
    return 0;
}