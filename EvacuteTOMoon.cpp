/*
EVactute To Moon
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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        int ans = 0;
        for (int i = 0; i < min(m, n); i++)
        {
            ans += min(a[i], b[i] * h);
        }
        cout << ans << endl;
    }
    return 0;
}