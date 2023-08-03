/*
Shrodinger Smiley
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
        int n, cnt(0), l(0), r(0);
        cin >> n;
        string s;
        cin >> s;
        int a(0), b(0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ':' && !a)
                b = 1;
            else if (b && s[i] == ')')
                a = 1;
            else if (s[i] == '(')
                a = 0, b = 0;
            else if (s[i] == ':' && a == 1)
                cnt++, a = 0;
        }
        cout << cnt << "\n";
    }
    return 0;
}