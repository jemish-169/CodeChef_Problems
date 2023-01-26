/*
Making a Meal
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases;
    cin >> cases;
    while (cases--)
    {
        int mini = INT_MAX;
        map<char, int> mp;
        string s;
        int x;
        cin >> x;
        while (x--)
        {
            cin >> s;
            for (auto i : s)
            {
                if (i == 'c' || i == 'o' || i == 'd' || i == 'h' || i == 'e' || i == 'f')
                    mp[i]++;
            }
        }
        for (auto i : mp)
        {
            if (i.first == 'c' || i.first == 'e')
                mini = min((i.second + 1) / 2, mini);
            else
                mini = min(mini, i.second);
            // cout << i.second << " ";
        }
        cout << mini << endl;
    }
    return 0;
}