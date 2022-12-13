/*
Chef and Groups
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
    string s;
    while (cases--)
    {
        int ans = 0;
        cin >> s;
        if (s[0] == '1')
            ans++;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i - 1] == '0' && s[i] == '1')
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}