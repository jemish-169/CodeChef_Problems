/*
Cool Name
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
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
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        int ans = 0;
        for (int i = 0; i < str.size(); i++)
        {
            ans += (i + 1) * ((str[i] - 'a') + 1);
        }
        cout << ans << endl;
    }
    return 0;
}