/*
Asymmetric Swaps
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
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
        int x;
        cin >> x;
        vector<int> vec(2 * x);
        for (auto i = 0; i < 2 * x; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        cout << min(vec[x - 1] - vec[0], vec[2 * x - 1] - vec[x]) << endl;
        // cout << vec[x] << " " << vec[0] << " " << vec[2 * x - 1] << " " << vec[x + 1] << endl;
    }
    return 0;
}