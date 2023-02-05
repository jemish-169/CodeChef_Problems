/*
Cost of Groceries
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
        int n, num = 0;
        cin >> n >> num;
        vector<int> vec(n), v(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] >= num)
                sum += v[i];
        }
        cout << sum << endl;
    }
    return 0;
}