/*
Assignment Score
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
        int n, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        int score = ((n + 1) * 50) - sum;
        if (score > 100)
            cout << -1 << endl;
        else if (score < 0)
            cout << 0 << endl;
        else
            cout << score << endl;
    }
    return 0;
}