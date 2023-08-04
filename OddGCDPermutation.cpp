/*
Odd GCD Permutation
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
        if (n % 2 == 1)
            cout << -1 << endl;
        else
        {
            for (int i = n; i >= 1; i--)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}