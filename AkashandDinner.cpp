/*
Akash and Dinner
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
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
        map<int, int> mp;
        vector<int> vec1, vec2;
        int n, k, t;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            vec1.push_back(t);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            vec2.push_back(t);
        }
        for (int i = 0; i < n; i++)
            mp[vec1[i]] = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (mp[vec1[i]] > vec2[i])
                mp[vec1[i]] = vec2[i];
        }
        multimap<int, int> mmp;
        for (auto i : mp)
            mmp.insert({i.second, i.first});
        if (mmp.size() < k)
            cout << -1 << endl;
        else
        {
            int sum = 0;
            for (auto i : mmp)
            {
                if (k--)
                {
                    sum += i.first;
                }
                else
                    break;
            }
            cout << sum << endl;
        }
    }
    return 0;
}