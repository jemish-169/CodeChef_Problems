/*
Interesting Subarray
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {

        int maxi = INT_MIN;
        int mini = INT_MAX;
        int x;
        cin >> x;
        int a[x];
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
            mini = min(mini, abs(a[i]));
            maxi = max(maxi, abs(a[i]));
        }

        cout << mini * mini << " " << maxi * maxi << endl;
    }
    return 0;
}