/*
Winning World Finals
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
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        if (n == 3)
        {
            cout << 0 << endl;
            continue;
        }

        sort(vec.begin(), vec.end());

        int ans1 = vec[n - 3] - vec[0];
        int ans2 = vec[n - 2] - vec[1];
        int ans3 = vec[n - 1] - vec[2];

        cout << min(ans1, min(ans2, ans3)) << endl;
    }
    return 0;
}