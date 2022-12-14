/*
Pawri Meme
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
        string s;
        cin >> s;
        int n = s.size();
        for (int i = 0; i < n - 4; i++)
        {
            if (s[i] == 'p' && s[i + 1] == 'a' && s[i + 2] == 'r' && s[i + 3] == 't' && s[i + 4] == 'y')
            {
                s[i] = 'p';
                s[i + 1] = 'a';
                s[i + 2] = 'w';
                s[i + 3] = 'r';
                s[i + 4] = 'i';
                i += 4;
            }
        }
        cout << s << endl;
    }
    return 0;
}