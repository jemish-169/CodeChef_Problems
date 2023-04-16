/*
Minimum number of pizza slices
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int a, b;
        cin >> a >> b;
        cout << a / __gcd(a, b) << endl;
    }
    return 0;
}