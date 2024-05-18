/*
Origin
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

        int div = n / 9;
        int rem = n % 9;

        cout << (div * 45) + ((rem * (rem + 1)) / 2) << endl;
    }
    return 0;
}