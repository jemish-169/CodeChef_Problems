/*
Maximum Length Even Subarray
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

        int sum = (n * (n + 1)) / 2;

        if (sum % 2 == 0)
            cout << n << endl;
        else
            cout << n - 1 << endl;
    }
    return 0;
}