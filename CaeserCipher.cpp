/*
Caeser Cipher
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
        int n;
        cin >> n;
        string s, t, u;
        cin >> s >> t >> u;
        int diff = t[0] - s[0];
        if (diff < 0)
            diff += 26;
        for (int i = 0; i < n; i++)
        {
            cout << char('a' + ((u[i] - 'a' + diff) % 26));
        }
        cout << "\n";
    }
    return 0;
}