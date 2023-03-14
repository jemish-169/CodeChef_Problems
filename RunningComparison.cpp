/*
Running Comparison
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
// int maxi = INT_MIN;
// int mini = INT_MAX;
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
        vector<int> vec(n);
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> vec[i];
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++)
        {
            int maxi = max(vec[i], v[i]);
            int mini = min(vec[i], v[i]);
            if (maxi <= 2 * mini)
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
}