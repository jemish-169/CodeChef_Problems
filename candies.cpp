/*
candies
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
list<int> ls;
vector<int> vec;
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
        unordered_map<int, int> mp;
        int n, j;
        bool flag = true;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> j;
            mp[j]++;
        }
        for (auto i : mp)
        {
            if (i.second > 2)
            {
                cout << "No" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "Yes" << endl;
    }
    return 0;
}