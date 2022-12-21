/*
Chef and String
*/
#include <bits/stdc++.h>
#include <string.h>
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
        string s;
        cin >> s;
        int pos = s.size();
        string sub = s[pos - 1] + s.substr(0, pos - 1);
        string r = s.substr(1, pos) + s[0];
        if (sub == r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}