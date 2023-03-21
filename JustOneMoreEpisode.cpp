/*
Just One More Episode
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
        int n;
        cin >> n;
        if (n > 24)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}