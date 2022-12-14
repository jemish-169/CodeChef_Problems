/*
Convert to permutation
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
        vector<int> vec;
        int x, t;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> t;
            vec.push_back(t);
        }
        int sum = 0;
        bool b = false;
        sort(vec.begin(), vec.end());
        for (int i = 0; i < x; i++)
        {
            if (vec[i] > i + 1)
            {
                b = true;
                break;
            }
            else
                sum += i + 1 - vec[i];
        }
        if (b)
            cout << -1 << endl;
        else
            cout << sum << endl;
    }
    return 0;
}