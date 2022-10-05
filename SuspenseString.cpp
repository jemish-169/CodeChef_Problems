/*
Suspense String
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
        string t, s;
        cin >> n >> s;
        while (!s.empty())
        {
            char ch = s.front();
            if (ch == '0')
                t = ch + t;
            else
                t += ch;
            s.erase(0, 1);
            if (!s.empty())
            {
                char ch = s.back();
                if (ch == '1')
                    t = ch + t;
                else
                    t += ch;
                s.erase(s.size() - 1, 1);
            }
        }
        cout << t << endl;
    }
    return 0;
}