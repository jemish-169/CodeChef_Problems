/*
Another Game
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
        vector<int> vec(n);

        int maxIndex = -1, maxi = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] != i + 1)
            {
                if (maxi < max(maxi, vec[i]))
                {
                    maxi = max(maxi, vec[i]);
                    maxIndex = i + 1;
                }
            }
        }
        cout << 1 + maxi << endl;
    }
    return 0;
}