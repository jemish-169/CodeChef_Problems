/*
Blobby Volley Scores
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
        int a(0), b(0);
        if (s[0] == 'A')
            a++;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                if (s[i] == 'A')
                    a++;
                else
                    b++;
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}