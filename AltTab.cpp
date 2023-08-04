/*
Alt - Tab
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        vector<string> vec(n);
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            mp[vec[i]]++;
        }
        string str = "";
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp.find(vec[i]) != mp.end())
            {
                int j = vec[i].size();
                str += vec[i].substr(j - 2, 2);
                mp.erase(vec[i]);
            }
        }
        cout << str << endl;
    }
    return 0;
}