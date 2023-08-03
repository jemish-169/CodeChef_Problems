/*
Dotify Playlist
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
int maxi = INT_MIN;
int mini = INT_MAX;
#define endl "\n"

bool compare(vector<int> &v1, vector<int> &v2)
{
    return v1[1] > v2[1];
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        vector<int> vec;
        int n, k, l;
        cin >> n >> k >> l;
        int x, y;
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            v1.push_back(x);
            v2.push_back(y);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (l == v2[i])
            {
                vec.push_back(v1[i]);
                cnt++;
            }
        }
        if (cnt < k)
            cout << "-1" << endl;
        else
        {
            int sum = 0;
            sort(vec.begin(), vec.end(), greater<int>());
            for (int i = 0; i < k; i++)
            {
                sum += vec[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}